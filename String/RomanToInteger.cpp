class Solution {
public:
    int romanToInt(string s) {
        
        // check for the base case
        if(s.size() == 0) {
            return 0;
        }
        
        unordered_map<char,int>mapper;
        mapper['I'] = 1;
        mapper['V'] = 5;
        mapper['X'] = 10;
        mapper['L'] = 50;
        mapper['C'] = 100;
        mapper['D'] = 500;
        mapper['M'] = 1000;
        
        int len = s.size();
        int res = mapper[s[len-1]];
        
        // Now observing cases
        // IV : V(5) BUT X-1 = I (SO 5-1 = 4)
        // VI : I(1) BUT X-1 = V (SO 5+1 = 6)
        
        for(int i=s.size()-2;i>=0;i--) {
            // VI : I(1) BUT X-1 = V (SO 5+1 = 6)
            if(mapper[s[i]] >= mapper[s[i+1]]) {
                res += mapper[s[i]]; // 6
            }else{
                // IV : V(5) BUT X-1 = I (SO 5-1 = 4)
                res -= mapper[s[i]];
            }
        }
        return res;
    }
};