class Solution {
public:
    vector<int> fairCandySwap(vector<int>& a, vector<int>& b) {
        
        int sa = 0, sb = 0;
        
        for (int i = 0; i < a.size(); i++)
            sa += a[i];
        
        for (int i = 0; i < b.size(); i++)
            sb += b[i];
        
        int d = (sb - sa) / 2;
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        int i = 0, j = 0;
        
        while (i < a.size() && j < b.size()) {
            
            if (b[j] - a[i] == d)
                return {a[i], b[j]};
            
            if (b[j] - a[i] < d)
                j++;
            else
                i++;
        }
        
        return {};
    }
};
