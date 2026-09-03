class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,bool>nums1freq;
        for(auto i:nums1){
            nums1freq[i]=true;
        }

        set<int>st;
        for(auto i:nums2){
            if(nums1freq.find(i)!=nums1freq.end()){
                st.insert(i);
            }
        }

        vector<int>ans(st.begin(),st.end());
        return ans;
    }
};