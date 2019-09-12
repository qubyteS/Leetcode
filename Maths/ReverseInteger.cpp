class Solution {
public:
    int reverse(int x) {
        if(x == 0) return 0;
        long long int revNum = 0;
        
        bool neg = false;
        
        while(x!=0) {
            revNum = revNum*10 + x%10;
            x/=10;
        }
        
        if(revNum <INT_MIN || revNum>INT_MAX) return 0;
        return (int)revNum;
    }
};