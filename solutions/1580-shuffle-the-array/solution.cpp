class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        if(nums.size() == 0) return {};
        
        int size;
        size = nums.size();
        
        vector<int> ans;
        ans.resize(size);
        
        int left;
        left = 0;
        
        int right;
        right = n;
        
        int index;
        index = 0;
        
        while(left < n && right < size)
        {
            ans[index] = nums[left];
            index++;
            
            ans[index] = nums[right];
            index++;
            
            left++;
            right++;
        }
        
        return ans;
    }
};
