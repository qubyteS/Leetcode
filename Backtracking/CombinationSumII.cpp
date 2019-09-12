#define pb push_back

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> nums;
        sort(candidates.begin(), candidates.end());
        dfs(candidates, target, 0, nums, res);
        return res;
    }
    
    void dfs(vector<int>& candidates, int target, int index, vector<int>& nums, vector<vector<int>>& res) {
        if (target < 0)
            return;
        if (target == 0) {
            res.pb(nums);
            return;
        }
        
        
        for (int i=index; i<candidates.size(); i++) {
            if(i>index && candidates[i] == candidates[i-1]){
                continue;
            } 
            nums.pb(candidates[i]);
            dfs(candidates, target-candidates[i], i+1,nums, res);
            nums.pop_back();
        }
    }
};