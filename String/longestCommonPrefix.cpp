class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longestCommonPrefix = "";
        if(strs.empty() || strs.size() == 0){
            return longestCommonPrefix;
        }
        
        int index = 0;
        for(char c:strs[index]) {
            for(int i=1;i<strs.size();i++) {
                // check out of bounda nd not equal case
                if(c!=strs[i][index]) {
                    return longestCommonPrefix;
                }
            }
            
            longestCommonPrefix+=c;
            index++;
        }
        
        return longestCommonPrefix;
    }
};