class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();

        vector<vector<int>> ans;
        
        int i = 0;

        for(i = 0; i < n; i++){
            if(intervals[i][1] < newInterval[0]){
                ans.push_back(intervals[i]);
            }
            else if(intervals[i][0] > newInterval[1]) break;
            else {
                newInterval[0] = min(newInterval[0], intervals[i][0]);
                newInterval[1] = max(newInterval[1], intervals[i][1]);
            }
        }
         
        ans.push_back(newInterval);

        while(i < n){
            if(ans.back()[1] < intervals[i][0]){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[0] = min(intervals[i][0], ans.back()[0]);
                ans.back()[1] = max(intervals[i][1], ans.back()[1]);
            }
            i++;
        }
        return ans;
    }
};
