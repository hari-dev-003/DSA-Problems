class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());     
        vector<vector<int>> merged;
        int count=0;
        for(auto interval:intervals){
            if(merged.empty() || merged.back()[1]<=interval[0]){
                merged.push_back(interval);
            }
            else{
                count++;
                if(interval[1] < merged.back()[1]) {
                    merged.back() = interval;
                }
            }
        }
        return count;
    }
};