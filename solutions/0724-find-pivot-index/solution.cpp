class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            s=s+nums[i];
        }

        int p=0;
        for(int i=0;i<nums.size();i++){
            int diff=s-p-nums[i];
            if(p==diff){
                return i;
            }
            p=p+nums[i];
        }
        return -1;
    }
};
