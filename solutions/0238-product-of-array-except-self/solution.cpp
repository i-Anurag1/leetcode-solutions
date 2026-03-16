class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        if(n == 0)
        {
            return {};
        }

        if(n == 1)
        {
            return {1};
        }

        vector<int> ans(n);

        int i;

        int prefix = 1;

        for(i = 0; i < n; i++)
        {
            ans[i] = prefix;
            prefix = prefix * nums[i];
        }

        int suffix = 1;

        for(i = n - 1; i >= 0; i--)
        {
            ans[i] = ans[i] * suffix;
            suffix = suffix * nums[i];
        }

        return ans;
    }
};
