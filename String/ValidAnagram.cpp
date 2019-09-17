class Solution {
public:
    bool isAnagram(string s, string t) {
        int ssize = s.size();
        int tsize = t.size();
        
        // if both s and t are of unequal length
        if(ssize != tsize) return false;
        
        map<char,int>smap;
        map<char,int>tmap;
        
        for(int i=0;i<ssize;i++) {
            smap[s[i]]++;
            tmap[t[i]]++;
        }
        
        if(smap!=tmap) return false;
        return true;
        
    }
};
