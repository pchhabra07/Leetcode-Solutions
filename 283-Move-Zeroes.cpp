class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        int nextIdx = 0;
        while(nextIdx < n && nums[nextIdx]!=0){
            nextIdx++;
        }

        if(nextIdx == n){
            return;
        }

        for(int i = nextIdx; i < n; i++){
            if(nums[i] != 0){
                swap(nums[nextIdx], nums[i]);
                while(nextIdx < n && nums[nextIdx]!=0){
                    nextIdx++;
                }
            }
        }
        return;
    }
};