class Solution {
public:
    int countArrays(vector<int>& digitSum) {
        int mod = 1e9 + 7;

int n = digitSum.size();

for(int x : digitSum) {
    if(x > 45) return 0;
}

vector<vector<int>> nums(51);

for(int x = 0; x <= 5000; x++) {
    int s = 0;
    int temp = x;
    while(temp) {
        s += temp % 10;
        temp /= 10;
    }
    nums[s].push_back(x);
}

vector<vector<int>> dp(n);

if(nums[digitSum[0]].empty()) return 0;

for(int x : nums[digitSum[0]]) {
    dp[0].push_back(1);
}

for(int i = 1; i < n; i++) {
    vector<int> &prevVals = nums[digitSum[i-1]];
    vector<int> &currVals = nums[digitSum[i]];

    if(prevVals.empty() || currVals.empty()) return 0;

    int m = currVals.size();
    int p = prevVals.size();

    vector<long long> prefix(p);

    prefix[0] = dp[i-1][0];

    for(int j = 1; j < p; j++) {
        prefix[j] = (prefix[j-1] + dp[i-1][j]) % mod;
    }

    dp[i].resize(m);

    int j = 0;

    for(int k = 0; k < m; k++) {
        while(j < p && prevVals[j] <= currVals[k]) {
            j++;
        }

        if(j == 0) dp[i][k] = 0;
        else dp[i][k] = prefix[j-1];
    }
}

long long ans = 0;

for(int val : dp[n-1]) {
    ans = (ans + val) % mod;
}

return ans;
    }
};
