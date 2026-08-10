class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> v;
        int sum = 0;
    
        for (int i = 0; i < gain.size(); i++) {
               sum += gain[i];
            if (i == 0) {
                v.push_back(0);}
            
                v.push_back(sum);
            
         
        }
          int max = v[0];
        for (int i = 0; i < v.size(); i++) {
            if (max < v[i]) {
                max = v[i];
            }
        }
        return max;
    }
};