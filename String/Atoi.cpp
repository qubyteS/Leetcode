class Solution {
public:
    int myAtoi(string str) {
        int i = 0;
        int sign = 1;
        long num = 0;
        
        //remove all whitespaces
        while(isspace(str[i])){
            i++;
        }
        
        
        // check for sign
        if(str[i]=='-' || str[i]=='+'){
            if(str[i++] == '-') sign *= -1;
        }
            
        // remove all leading zroes
        while(str[i]=='0'){
            i++;
        }
        
        // get actual integer part
        while(isdigit(str[i])){
            num = 10*num + str[i++]-'0';
            if(num > fabs(long(INT_MIN))) break;
        }
        
        num *= sign;
        
        // overflows
        if(num < INT_MIN) return INT_MIN;
        if(num > INT_MAX) return INT_MAX;
        return num;
    }
};