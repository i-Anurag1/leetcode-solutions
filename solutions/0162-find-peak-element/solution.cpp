class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < nums[mid + 1]) {
                left = mid + 1;  // Peak is in the right half
            } else {
                right = mid;     // Peak is in the left half (including mid)
            }
        }
        return left;  // or right, they converge
    }
};   
