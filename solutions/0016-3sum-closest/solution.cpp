class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int max_diff = INT_MAX;
        int resSum=0;

        for(int i=0; i<n-2; i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }

            int j=i+1;
            int k=n-1;

            
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                int diff = abs(sum - target);

                if (diff < max_diff) {
                    max_diff = diff;
                    resSum = sum;
                }

                if(sum == target){
                    return sum;
                }
                else if(sum<target){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return resSum;
    }
};
