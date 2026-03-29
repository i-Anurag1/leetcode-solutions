class Solution {
public:
    int firstMatchingIndex(string s) {
        int n= s.size();
        if(n==0) return -1;
        if(n==1) return 0;
        int l=0;
        while(l<n)
            {
                int r= n-l-1;
                if(s[l]==s[r])
                {
                    return l;
                }
                l++;
            }
        return -1;
    }
};
