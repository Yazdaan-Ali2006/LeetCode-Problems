class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.begin()+k);
    
        // THE FOLLOWING METHOD IS NOT TIME EFFICIENT DUE TO SHIFTING
        // for (int i = 0; i < k%n;i++) {
        //     int temp = nums[n - 1];
        //     nums.pop_back();
        //     nums.insert(nums.begin(), temp);}
         }
    };
