class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int len = digits.size();
        int i=0;
        int carry = 1;
        int j = len-1;
        vector<int>result;
        
        // remove any trailing zeroes if there
//         while(i<len) {
//             if(digits[i] == 0) {
//                 i++;
//             }
//         }
        
        while(j>=i) {
            int sum = digits[j]+carry;
            digits[j] = sum%10;
            carry = sum/10;
            
            if(carry == 0) {
                return digits;
            }
            
            j--;
        }
        
        if(carry) {
            digits.insert(digits.begin(),1);
        }   
        
        return digits;
    }
};