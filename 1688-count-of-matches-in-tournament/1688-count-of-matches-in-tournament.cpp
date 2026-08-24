class Solution {
public:
    int numberOfMatches(int n) {
        int count = 0;
        while (n != 1) {
            if (n % 2 == 0) {
                count += n/2;
                n = n / 2;
            }
            else{
                n = (n - 1) / 2;
                count+=n;
                n=n+1;


            }
        }
        return count;
    }
};