class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.size();
        if(n == 0) return 0;
        
        int ans = 0;
        
        for(int i = 0; i < n; i++){
            
            set<char> st;
            
            for(int j = i; j < n; j++){
                
                if(st.count(s[j])){
                    break;
                }
                
                st.insert(s[j]);
                
                int curr = j - i + 1;
                ans = max(ans, curr);
            }
        }
        
        return ans;
    }
};
