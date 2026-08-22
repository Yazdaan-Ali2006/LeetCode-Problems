class Solution {
public:
    bool checkDivisibility(int n) {
        int save = n;
        int sum = 0;
        int product = 1;

        while (n!=0) {
        int lastdigit=n%10;
          

            sum += lastdigit;
            product *=lastdigit;
            n=n/10;
        }

        if (save % (sum + product) == 0) {
            return true;
        } else {
            return false;
        }
    }
};