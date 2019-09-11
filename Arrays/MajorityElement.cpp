class Solution {
public:
    
    int findCandidate(vector<int>&nums) {
        int maj_index = 0;
        int count = 1;
        
        for(int i=1;i<nums.size();i++) {
            if(nums[maj_index] == nums[i]){
                count++;
            }else{
                count--;
            }
            
            if(count == 0) {
                maj_index = i;
                count = 1;
            }
        }
        return nums[maj_index];
    }
    
    int majorityElement(vector<int>& nums) {
        /**
        
        This questions is a typical implementation of Boyer Moores Voting Algo
        
        */
        
        int cand = findCandidate(nums);
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == cand) {
                count++;
            }
            
            if(count > (nums.size()/2)) {
                break;
            }
        }
        return cand;
    }
};