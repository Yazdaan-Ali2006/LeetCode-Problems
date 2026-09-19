class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin(), candyType.end());
        int n = (candyType.size()) / 2;
        candyType.erase(unique(candyType.begin(), candyType.end()),
                        candyType.end());

        if (candyType.size() <= n) {
            return candyType.size();
        }
        else{
            return n;
        }
    }
};