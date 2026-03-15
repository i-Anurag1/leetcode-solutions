class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int n = nums.size();

        if(n <= 1)
        {
            return -1;
        }

        int slow = nums[0];
        int fast = nums[0];

        while(true)
        {
            slow = nums[slow];
            fast = nums[nums[fast]];

            if(slow == fast)
            {
                break;
            }
        }

        int start = nums[0];

        while(start != slow)
        {
            start = nums[start];
            slow = nums[slow];
        }

        return start;
    }
};
