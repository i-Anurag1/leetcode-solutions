class Solution {
public:
    long long minimumCost(vector<int>& nums, int k, int dist) {
        multiset<int> small, large;
        long long sum = 0;
        int need = k - 1;
        int n = nums.size();

        auto balance = [&]() {
            while ((int)small.size() > need) {
                auto it = prev(small.end());
                sum -= *it;
                large.insert(*it);
                small.erase(it);
            }
            while ((int)small.size() < need && !large.empty()) {
                auto it = large.begin();
                sum += *it;
                small.insert(*it);
                large.erase(it);
            }
        };

        auto add = [&](int x) {
            if (small.empty() || x <= *prev(small.end())) {
                small.insert(x);
                sum += x;
            } else {
                large.insert(x);
            }
            balance();
        };

        auto remove = [&](int x) {
            auto it = small.find(x);
            if (it != small.end()) {
                sum -= x;
                small.erase(it);
            } else {
                large.erase(large.find(x));
            }
            balance();
        };

        long long ans = LLONG_MAX;

        for (int i = 1; i <= dist + 1; i++) {
            add(nums[i]);
        }

        ans = nums[0] + sum;

        for (int i = dist + 2; i < n; i++) {
            remove(nums[i - dist - 1]);
            add(nums[i]);
            ans = min(ans, nums[0] + sum);
        }

        return ans;
    }
};
