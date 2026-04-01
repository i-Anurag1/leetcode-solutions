class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand, count=0;
        for(int i=0;i<nums.size();i++){
            if(count ==0){
                count++;
                cand=nums[i];
            }
            else{
                if(cand==nums[i]){
                    count++;
                }
                else{
                    count--;
                }
            }
        }
        return cand;
    }
};
