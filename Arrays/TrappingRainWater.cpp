class Solution {
public:
    int trap(vector<int>& height) {
        int n = (int)height.size();
        if(n <= 2) return 0;
        int res = 0;
        int leftBar = height[0], rightBar = height[n-1];
        int l = 0, r = n-1;
        while(l < r){
            if(leftBar <= rightBar){
                l++;
                if(height[l] >= leftBar){
                    leftBar = height[l];
                }
                else{
                    res += leftBar - height[l];
                }
            }
            else{
                r--;
                if(height[r] >= rightBar){
                    rightBar = height[r];
                }
                else{
                    res += rightBar - height[r];
                }
            }
        }
        return res;
    }
};