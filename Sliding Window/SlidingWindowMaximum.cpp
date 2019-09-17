#define pb push_back

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>res;
        
        for(int i=0;i<nums.size();i++) {
            
            // remove elements which are out of the window
            if(!dq.empty() && dq.front() == i-k) {
                dq.pop_front();
            }
            
            // remove useless elements from the deque
            while(!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }
            
            // else insert it into the dq
            dq.push_back(i);
            
            // return the sliding window maximum
            if(i>=k-1) {
                res.pb(nums[dq.front()]);
            }
        }
        return res;
    }
};