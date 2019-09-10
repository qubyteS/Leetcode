#define pb push_back

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>res;
        for(int i=0;i<nums.size();i++) {
            if(mp.find(target - nums[i])!=mp.end()) {
                res.pb(mp[target - nums[i]]);
                res.pb(i);
            }mp[nums[i]] = i;
        }
        return res;
    }
};