class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        //o(n^2) approach
        // vector<int>small;
        // for(int i=0;i<nums1.size();i++){
            // for(int j=0;j<nums2.size();j++){
                // if(nums1[i]==nums2[j]){
                    // small.push_back(nums1[i]);
                // }
            // }
        // }
    //     int min=small[0];
    //     for(int i=0;i<small.size();i++){
    //         if(min>small[i]){
    //             min=small[i];
    //         }
    //     }
    //     return min;
    // }
    

    //better approach
    int i=0;
    int j=0;
    while(i<nums1.size()&& j<nums2.size()){
        if(nums1[i]==nums2[j]){
            return nums1[i];
        }
        else if(nums1[i]<nums2[j])
        { 
            i++;

        }
        else{
            j++;
        }

    }
    return -1;
    }

    
};