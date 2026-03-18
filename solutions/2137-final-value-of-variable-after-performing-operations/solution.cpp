class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        if (operations.size() == 0) return 0;

        int n = operations.size();
        int i = 0;
        int k = 0;

        for (i = 0; i < n; i++) {
            if (operations[i] == "X++" || operations[i] == "++X") {
                k = k + 1;
            } else {
                k = k - 1;
            }
        }

        return k;
    }
};
