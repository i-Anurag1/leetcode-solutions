class Solution {
    public int findMin(int[] nums) {
        int lo=0, hi=nums.length-1;
        int ans=nums[0];
        while(lo<=hi){
            int mid= lo + (hi-lo)/2;
            if(nums[mid]>=nums[0]) lo=mid+1;
            else{
                ans=nums[mid];
                hi=mid-1;
            }
        }
        return ans;
    }
}
