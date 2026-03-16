class Solution {
public:
    int minStartValue(vector<int>& nums) {

        int n = nums.size();

        if(n == 0)
        {
            return 1;
        }

        int curr = 0;
        int minVal = 0;

        int i;

        for(i = 0; i < n; i++)
        {
            curr = curr + nums[i];

            if(curr < minVal)
            {
                minVal = curr;
            }
        }

        int ans = 1 - minVal;

        return ans;
    }
};
