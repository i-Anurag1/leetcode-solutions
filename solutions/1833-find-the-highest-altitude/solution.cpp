class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ps = 0;
        int maxi = 0;

        for(int i = 0; i < gain.size(); i++){
            ps += gain[i];
            maxi = max(maxi, ps);
        }

        return maxi;
    }
};
