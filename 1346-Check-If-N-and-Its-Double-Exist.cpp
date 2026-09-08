class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        map<int,int>mp;

        for(int i = 0; i < n; i++){
            mp[arr[i]] = i;
        }

        for(int i = 0; i < n; i++){
            if(mp.find(2 * arr[i]) != mp.end() && i != mp[2 * arr[i]] ){
                return true;
            }
        }
        return false;
    }
};