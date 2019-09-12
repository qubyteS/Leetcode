class Solution {
public:
    
    void solve(vector<vector<int>>&res, vector<int>&cur, int n, int k, int index){
        if(cur.size()==k){
            res.push_back(cur);
            return;
        }    
        
        for(int i=index;i<=n;i++){
            cur.push_back(i);
            solve(res, cur, n, k , i+1);
            cur.erase(cur.end()-1);
        }
    }
    
    
    vector<vector<int>> combine(int n, int k) {
        //Corner case - 
        if(k == 0 || n == 0 || k>n)
            return vector<vector<int>>();
        
        //General case - 
        vector<vector<int>>res;
        vector<int>cur;
        solve(res, cur, n, k, 1);
        return res;
    }
};
