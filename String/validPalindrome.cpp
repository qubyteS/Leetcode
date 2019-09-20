class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 0) return true;
        
        string new_s = "";
        for(int i=0;i<s.size();i++) {
            if(isalpha(s[i]) || isdigit(s[i])) {
                new_s += tolower(s[i]);
            }
        }
        
        //cout<<"new_s is: " <<new_s<<endl;
        
        string reversed = "";
        
        for(int i = new_s.length()-1;i>=0;i--) {
            reversed+=new_s[i];
        }
        
        //cout<<"reversed: "<<reversed<<endl;
        if(new_s == reversed) return true;
        else return false;
    }
};