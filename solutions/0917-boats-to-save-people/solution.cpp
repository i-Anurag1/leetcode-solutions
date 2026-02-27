class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        sort(p.begin(), p.end());
        int i = 0, j = p.size() - 1, b = 0;
        while (i <= j) {
            if (p[i] + p[j] <= limit) i++;
            j--;
            b++;
        }
        return b;
    }
};
