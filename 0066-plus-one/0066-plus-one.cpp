class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         for(int i=digits.size()-1;i>=0;i--){
     // when digit is less than 9 then add 1 and simply return
            if(digits[i]<9){
                digits[i]++;
                return digits;

            }
    // for number equal to 9 or more use carry concept;        
            digits[i]=0;
        }
     // for the case when all the numbers of vectors are 9 then simple insert 1 in the beginning and return   
        digits.insert(digits.begin(),1);
        return digits;
    }
};