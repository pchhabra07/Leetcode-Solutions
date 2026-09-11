class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();

        if(n < 3)return false;

        // Strictly Increasing Subarray
        int i = 1;
        while(i < n && arr[i-1] < arr[i]){
            i++;
        }

        // Either No strictly increasing or Whole array strictly increasing and no decreasing
        if(i==1 || i==n){
            return false;
        }

        int j = i - 1;

        //Strictly Decreasing Subarray
        while(j + 1 < n && arr[j+1] < arr[j]){
            j++;
        }

        // No strictly decreasing case
        if(j != n - 1){
            return false;
        }

        return true;
    }
};