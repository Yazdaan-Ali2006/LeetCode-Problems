class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for (int i = left; i <= right; i++) {
            int temp = i;
            bool valid = true;

            while(temp!=0){
                int val=temp%10;
                if(val==0){
                    valid=false;
                    break;
                }
                if(i%val!=0){
                    valid=false;
                }
                temp=temp/10;

            }
            if(valid){
                ans.push_back(i);
            }

        }

        return ans;
    }
};