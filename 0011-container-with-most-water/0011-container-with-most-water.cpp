class Solution {
public:
    int min(int a, int b) {
        if (a > b) {
            return b;
        }
        return a;
    }

    int max(vector<int> areas) {
        int max = areas[0];

        for (int i = 1; i < areas.size(); i++) {
            if (max < areas[i]) {
                max = areas[i];
            }
        }

        return max;
    }

    int maxArea(vector<int>& height) {
        vector<int> areas;

        int j = height.size() - 1; // right
        int i = 0;                 // left

        while (i != j) {
            areas.push_back((j - i) * min(height[i], height[j]));

            if (height[i] < height[j]) {
                i++;
            }
            else {
                j--;
            }
        }

        return max(areas);
    }
};