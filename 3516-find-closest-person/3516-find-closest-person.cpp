class Solution {
public:
    int findClosest(int x, int y, int z) {
        int resA = abs(x - z);
        int resB = abs(y - z);
        if (resA > resB) {
            return 2;
        } else if (resA < resB) {
            return 1;
        }
        return 0;
    }
};