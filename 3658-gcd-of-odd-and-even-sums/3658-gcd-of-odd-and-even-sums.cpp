class Solution {
public:
int gcd(int a, int b)
{
 

    while (1)
    {   int rem = a % b;
        if (rem == 0)
        {
            return b;
        }
        a = b;
        b = rem;
       
    }

}
    int gcdOfOddEvenSums(int n) {
    int sumeven = n*(n + 1);
    int sumodd = n*n;
    return gcd(sumodd, sumeven);
}
};