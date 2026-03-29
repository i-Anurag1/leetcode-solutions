class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();
        
        if(n == 1) return 1;
        
        vector<int> divs;
        
        for(int i = 1; i * i <= n; i++) {
            if(n % i == 0) {
                divs.push_back(i);
                if(i != n / i) divs.push_back(n / i);
            }
        }
        
        int ans = 0;
        
        for(int k : divs) {
            
            bool ok = true;
            
            int prevMax = -1e9;
            
            for(int start = 0; start < n; start += k) {
                
                int drops = 0;
                int mn = nums[start];
                int mx = nums[start];
                
                for(int i = 0; i < k; i++) {
                    int curr = nums[start + i];
                    
                    int next;
                    
                    if(i == k - 1) next = nums[start];
                    else next = nums[start + i + 1];
                    
                    if(curr > next) drops++;
                    
                    mn = min(mn, curr);
                    mx = max(mx, curr);
                }
                
                if(drops > 1) {
                    ok = false;
                    break;
                }
                
                if(start != 0 && prevMax > mn) {
                    ok = false;
                    break;
                }
                
                prevMax = mx;
            }
            
            if(ok) ans += k;
        }
        
        return ans;
    }
};
