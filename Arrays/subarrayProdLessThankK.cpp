class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int cnt = 0;
		int prod = 1;
		int j = 0;
        int len = 0;
		if (k <= 1) return 0;
		for (int i = 0; i < nums.size(); i++) {
			prod *= nums[i];
			while (prod >= k) {
				prod /= nums[j++];
			}
			
            if(prod < k){
                len = i - j + 1;
                cnt += len;
            }
		}
		return cnt;
    }
};