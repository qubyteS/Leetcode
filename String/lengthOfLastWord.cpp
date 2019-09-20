class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s == "")
            return 0;
        
        int len = 0;
        int i = s.size()-1;
        
		// spaces at the end do not count
        while (s[i] == ' ')
            i--;
        
		// count last word's length
        for (; i >= 0; i--) {
            if (s[i] == ' ')
                break;
            else
                len++;
        }
        
        return len;
    }
};