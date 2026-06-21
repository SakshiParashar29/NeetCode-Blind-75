class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();

        int maxJump = 0;

        int j = 0;

        while(j < n){
            if(maxJump < j) return false;

            maxJump = max(maxJump, nums[j] + j);

            if(maxJump == (n - 1)) return true;

            j++;
        }
        return true;
    }
};
