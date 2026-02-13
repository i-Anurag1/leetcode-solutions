class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int md=100000;
        int res;
        for(int i=0;i<nums.size()-2;i++){
            int l=i+1;
            int r=nums.size()-1;
            
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                int diff=abs(sum-target);
                
                if(md>diff){
                    md=diff;
                    res=sum;

                }
                if(sum== target){
                    res=sum;
                    return res;
                }
                else if(sum<target){
                    l++;
                }
                else{
                    r--;
                }

            }

        }
        return res;
        
    }
};
