class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        /*
        
        Typical question that is an implementation of Dutch National Flag Algorithm
        
        **/
        
        int l=0,m=0,h=nums.size()-1;
        while(m<=h) {
            switch(nums[m]) {
                case 0: swap(nums[l++],nums[m++]);
                    break;
                    
                case 1: m++;
                    break;
                
                case 2: swap(nums[m],nums[h--]);
                    break;
            }
        }
    }
};