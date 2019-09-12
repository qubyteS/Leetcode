class Solution {
private:
    static bool mycompare(const int& num1,const int& num2){
        return to_string(num1) + to_string(num2) > to_string(num2) + to_string(num1);
    }
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),mycompare);
        string res = "";
        for(int i = 0; i < (int)nums.size(); i++)
            res += to_string(nums[i]);
        return res[0] == '0' ? "0" : res;
    }
};