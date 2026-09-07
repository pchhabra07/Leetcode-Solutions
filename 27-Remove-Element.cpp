class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, j = 0;
        for(int j = 0; j < nums.size(); j++){
            if(nums[j] == val){
                continue;
            }
            else{
                swap(nums[j], nums[i]);
                i++;
            }
        }
        return i;
    }
};