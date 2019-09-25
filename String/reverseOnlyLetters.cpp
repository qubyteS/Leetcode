class Solution {
public:
    bool isValid(char c) {
        if((c-0 >= 'a'-0 && c-0 <= 'z'-0) ||
           (c-0 >= 'A'-0 && c-0 <= 'Z'-0))
            return true;
        return false;
    }
    
    string reverseOnlyLetters(string s) {
        int r = s.length();
        int l = 0;
    
        while(l<r) {
            if(!isValid(s[l])) l++;
            else if(!isValid(s[r])) r--;
            else swap(s[l++], s[r--]);
        }
        
        return s;
    }
};