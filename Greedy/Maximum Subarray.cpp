class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        int j = 0, sum = 0, ans = INT_MIN;

        while(j < n){
            sum += nums[j];

            ans = max(ans, sum);

            if(sum < 0){
                sum = 0;
            }

            j++;
        }
        
        return ans;
    }
};
