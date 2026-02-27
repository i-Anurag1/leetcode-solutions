 class Solution {
public:
    int minSubArrayLen(int target, vector<int>& a) {
        int low = 0, high = 0;
        int sum = 0;
        int res = INT_MAX;
        int n = a.size();

        while (high < n) {
            sum += a[high];

            while (sum >= target) {
                int len = high - low + 1;
                res = min(res, len);
                sum -= a[low];
                low++;
            }

            high++;
        }

        return res == INT_MAX ? 0 : res;
    }
};
