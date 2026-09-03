class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        int swapIdx = 0;

        for(int i = 1; i < n; i++){
            if(nums[i] > nums[swapIdx]){
                nums[swapIdx + 1] = nums[i];
                swapIdx++;
            }
        }
        return swapIdx + 1;
    }
};