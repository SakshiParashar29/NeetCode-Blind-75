// Recursive. TC: O(2^m+n) and sc: O(m + n)
class Solution {
public:
    int solve(int m, int n){
        if(m == 0 && n == 0) return 1;

        if(m < 0 || n < 0) return 0;

        int up = solve(m - 1, n);
        int left = solve(m, n - 1);

        return up + left;
    }
    int uniquePaths(int m, int n) {
        return solve(m - 1, n - 1);
    }
};

// Memoization
// tc: O(m*n) because total states formed are mn
class Solution {
public:
    int dp[101][101];
    int solve(int m, int n){
        if(m == 0 && n == 0) return 1;

        if(m < 0 || n < 0) return 0;

        if(dp[m][n] != -1) return dp[m][n];

        int up = solve(m - 1, n);
        int left = solve(m, n - 1);

        return dp[m][n] = up + left;
    }
    int uniquePaths(int m, int n) {
        memset(dp, -1, sizeof(dp));
        return solve(m - 1, n - 1);
    }
};

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, 0));

        dp[0][0] = 1;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                if(i == 0 && j == 0) continue;

                int up = (i > 0) ? dp[i - 1][j] : 0;
                int left = (j > 0) ? dp[i][j - 1] : 0;

                dp[i][j] = up + left;
            }
        }

        return dp[m - 1][n - 1];
    }
};
