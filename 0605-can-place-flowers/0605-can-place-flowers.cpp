class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int count = 0;
        int left, mid, right;

        for (int i = 0; i < flowerbed.size(); i++) {

            mid = flowerbed[i];

            if (i == 0)
                left = 0;
            else
                left = flowerbed[i - 1];

            if (i == flowerbed.size() - 1)
                right = 0;
            else
                right = flowerbed[i + 1];

            if (left == 0 && mid == 0 && right == 0) {
                flowerbed[i] = 1;
                count++;
            }

            if (count >= n)
                return true;
        }

        return false;
    }
};