#include <string>
using namespace std;

struct Stack
{
    int top;
    int size;
    char *arr;
};

int isEmpty(Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(Stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(Stack *ptr, char val)
{
    if (isFull(ptr) == 1)
    {
        return;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(Stack *ptr)
{
    if (isEmpty(ptr) == 1)
    {
        return '\0';
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

class Solution
{
public:
    bool isValid(string p)
    {
        Stack *sp = new Stack;
        sp->top = -1;
        sp->size = p.length();
        sp->arr = new char[sp->size];

        for (int i = 0; p[i] != '\0'; i++)
        {
            if ((p[i] == '(') || (p[i] == '[') || (p[i] == '{'))
            {
                push(sp, p[i]);
            }
            else
            {
                if (isEmpty(sp))
                {
                    return false;
                }

                if ((p[i] == ')' && sp->arr[sp->top] == '(') ||
                    (p[i] == '}' && sp->arr[sp->top] == '{') ||
                    (p[i] == ']' && sp->arr[sp->top] == '['))
                {
                    pop(sp);
                }
                else
                {
                    return false;
                }
            }
        }

        if (isEmpty(sp))
        {
            return true;
        }

        return false;
    }
};