class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int size1=mat.size()-1;
        int size2=mat.size();
        int midstopper;
        int sum=0;
        for(int i=0;i<mat.size();i++){
            cout<<"sum:"<<sum<<endl;
            sum+=mat[i][i];
            if(size1-i==i){
                continue;
            }
            else{
                sum+=mat[i][size1-i];
            }

        }
        return sum;

    }
};