class Solution {
public:
    bool isPalindrome(int x) {
        
        // Any number that is -ve or 0 cannot be a plaindrome
        // if last number is 0, then overall number should be 0, then only it could be a palindrome
        if(x<0 || (x%10 == 0 && x != 0)) return 0;
        
        int revPal = 0;
        while(x>revPal) {
            revPal = revPal*10+x%10;
            x/=10;
        }
        
        // for 1212  : after the while loop ends
        // x = 12 and revPal = 21
        
        // for even length palindrome, x == revPal
        // for odd length palindrome , ex, 121 : middle element is useless
        // so, for odd length number, x == revPal/10
        
        return x == revPal || x == revPal/10;   
    }
};