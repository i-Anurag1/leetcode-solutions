class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int k,s=0;
        for(int i = 0;i<nums.size();i++){
            if(i%2==0){
                k=k+nums[i];
            }
            else {
                s=s+nums[i];
            }
            
        }
        return k-s;
    }
};
