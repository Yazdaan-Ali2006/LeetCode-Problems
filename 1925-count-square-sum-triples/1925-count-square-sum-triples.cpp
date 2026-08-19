class Solution {
public:
    int countTriples(int n) {
        int count = 0;

        for (int a = 1; a <= n; a++) {
            for (int b = 1; b <= n; b++) {
                int c;
                int sum = a* a + b* b ;
                 c= sqrt(sum);
                if (c <= n && c*c == sum) {
                    count++;
                }
            }
        }
    return count;
    }


};