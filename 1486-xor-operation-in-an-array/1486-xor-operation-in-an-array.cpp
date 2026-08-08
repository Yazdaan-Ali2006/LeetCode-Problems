class Solution {
public:
    int xorOperation(int n, int start) {
     int operation=0;
     for(int i=0;i<n;i++){
        operation=start^operation;
        start=start+2;
         }
        return operation;
    }
};