class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return -1;
        
        int lastOne = -1;
        int lastTwo = -1;
        int ans = INT_MAX;
        
        for(int i = 0; i < n; i++) {
            if(nums[i] == 1) {
                lastOne = i;
                if(lastTwo != -1) {
                    int diff = abs(i - lastTwo);
                    ans = min(ans, diff);
                }
            }
            
            if(nums[i] == 2) {
                lastTwo = i;
                if(lastOne != -1) {
                    int diff = abs(i - lastOne);
                    ans = min(ans, diff);
                }
            }
        }
        
        if(ans == INT_MAX) return -1;
        return ans;
    }
};
