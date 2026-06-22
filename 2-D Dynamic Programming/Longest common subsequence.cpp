// Recursive
class Solution {
public:
    int solve(int m, int n, string& text1, string& text2){
        if(m <= 0 || n <= 0) return 0;

        int take = 0;

        if(text1[m - 1] == text2[n - 1]){
            take = 1 + solve(m - 1, n - 1, text1, text2);
        }

        int skip = max(solve(m - 1, n, text1, text2), solve(m, n - 1, text1, text2));

        return max(take, skip);
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length();
        int n = text2.length();

        return solve(m, n, text1, text2);
    }
};
