class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size = nums.size();
        
        for(int i=0;i<size;i++) {
            int index = nums[i]%size;
            nums[index] += size;
        }
        
        int i;
        for(i=0;i<size;i++) {
            if((nums[i]/size) > 1) {
                break;
            }
        }
        
        return i;
    }
};