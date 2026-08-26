class Solution {
public:  

    void merge_sort(vector<int>& arr, vector<int>& b, int high, int mid, int low) {
      //to prevent time error i have to pass vector b in the parameter now it forming only one time 
        int i = low;
        int k = low;
        int j = mid + 1;

        while (i <= mid && j <= high) {

            if (arr[i] > arr[j]) {
                b[k] = arr[j];
                k++;
                j++;
            }
            else {
                b[k] = arr[i];
                k++;
                i++;
            }
        }

        while (i <= mid) {
            b[k] = arr[i];
            k++;
            i++;
        }

        while (j <= high) {
            b[k] = arr[j];
            k++;
            j++;
        }

        for (int x = low; x <= high; x++) {
            arr[x] = b[x];
        }
    }

    void merge(vector<int>& arr, vector<int>& b, int low, int high) {

        if (low < high) {

            int mid = (low + high) / 2;

            merge(arr, b, low, mid);
            merge(arr, b, mid + 1, high);

            merge_sort(arr, b, high, mid, low);
        }
    }

    vector<int> sortArray(vector<int>& nums) {

        vector<int> b(nums.size());

        merge(nums, b, 0, nums.size() - 1);

        return nums;
    }
};