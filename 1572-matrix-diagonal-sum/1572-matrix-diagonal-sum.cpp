class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int size=mat.size()-1;
        int midstopper;
        int sum=0;
        for(int i=0;i<mat.size();i++){
            cout<<"sum:"<<sum<<endl;
            sum+=mat[i][i];
            if(size-i==i){
                continue;
            }
            else{
                sum+=mat[i][size-i];
            }

        }
        return sum;

    }
};