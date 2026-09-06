class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

        vector<int>ans;

        int neg = 0;
        while(neg < n && nums[neg] < 0){
            neg++;
        }

        int pos = neg;
        neg--;

        while(neg >= 0 && pos<n){
            if(abs(nums[neg]) <= abs(nums[pos])){
                ans.push_back(nums[neg] * nums[neg]);
                neg--;
            }
            else{
                ans.push_back(nums[pos] * nums[pos]);
                pos++;
            }
        }

        while(neg >= 0){
            ans.push_back(nums[neg] * nums[neg]);
            neg--;
        }
        while(pos < n){
            ans.push_back(nums[pos] * nums[pos]);
            pos++;
        }

        return ans;
    }
};