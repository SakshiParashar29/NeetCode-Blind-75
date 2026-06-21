class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();

        sort(begin(intervals), end(intervals), [](auto& a, auto& b){
            return a[1] < b[1];;
        });
        
        int last = intervals[0][1];
        int ans = 0;

        for(int i = 1; i < n; i++){
            if(intervals[i][0] >= last){
                last = intervals[i][1];
            }          
            else ans++;
        }
        return ans;
    }
};
