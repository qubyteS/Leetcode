class Solution {
public:
    int maxArea(vector<int>& height) {
        int water_count = 0;
        int low = 0;
        int high = height.size()-1;
        
        while(low<=high) {
            water_count = max(water_count, min(height[low],height[high])*(high-low));
            
            if(height[low]<height[high]) {
                low++;
            }else{
                high--;
            }
        }
        return water_count;
    }
};