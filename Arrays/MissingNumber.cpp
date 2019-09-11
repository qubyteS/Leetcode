class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x = nums[0];
        int y = 0;
        
        for(int i=1;i<nums.size();i++) {
            x ^=nums[i];
        }
        
        for(int i=1;i<=nums.size();i++) {
            y^=i;
        }
        
        return x^y;
    }
};