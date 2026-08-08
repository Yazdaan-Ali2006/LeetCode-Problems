class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> discount;
        int res;
        int count;
        int i, j;

        for (i = 0; i < prices.size() ; i++) {
            res = 0;
            count = 0;
            for (j = i + 1; j < prices.size(); j++) {
                if (prices[i] >= prices[j]) {
                    count++;
                    break;
                }
            }
            if (count) {
                res = prices[i] - prices[j];
                discount.push_back(res);
            } else {
                discount.push_back(prices[i]);
            }
        }

        return discount;
    }
};