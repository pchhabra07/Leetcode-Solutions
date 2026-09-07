class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();

        int size = 0;
        int i = 0;
        while(size < n){
            if(arr[i] == 0){
                size += 2;
            }
            else{
                size++;
            }
            i++;
        }

        i--;
        int j = n-1;

        if(size > n && arr[i] == 0){
            arr[j] = 0;
            i--;
            j--;
        }

        while(i >= 0 && j >= 0){
            if(arr[i] != 0){
                arr[j] = arr[i];
                j--;
            }
            else{
                arr[j] = 0;
                j--;
                arr[j] = 0;
                j--;
            }
            i--;
        }
        return;
    }
};