class Solution {
public:
    vector<Interval> merge(vector<Interval>& intervals) {
        sort(intervals.begin(), intervals.end(), [](Interval& a, Interval& b){ return a.start < b.start; });
        vector<Interval>res;
        for(int i = 0; i < intervals.size(); i++)
            if(res.empty() || res.back().end < intervals[i].start) res.push_back(intervals[i]);
            else res.back().end = max(res.back().end, intervals[i].end);
        return res;
    }
};

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res{intervals[0]};
        for (int i = 1; i < intervals.size(); ++i) {
            if (res.back()[1]< intervals[i][0]) {
                res.push_back(intervals[i]);
            } else {
                res.back()[1] = max(res.back()[1], intervals[i][1]);
            }
        }
        return res;
    }
};


