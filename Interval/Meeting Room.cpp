class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        int n = arr.size();
        
        sort(begin(arr), end(arr));
        
        int last = arr[0][1];
        
        for(int i = 1; i < n; i++){
            if(arr[i][0] < last) return false;
            last = arr[i][1];
        }
        return true;
    }
};
