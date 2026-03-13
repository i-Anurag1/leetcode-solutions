class Solution {
public:
    int maxArea(vector<int>& height) {

        int n = height.size();
        if(n < 2) return 0;

        int left = 0;
        int right = n - 1;

        int ans = 0;

        while(left < right)
        {
            int h = min(height[left], height[right]);
            int width = right - left;
            int area = h * width;

            if(area > ans)
            {
                ans = area;
            }

            if(height[left] < height[right])
            {
                left = left + 1;
            }
            else
            {
                right = right - 1;
            }
        }

        return ans;
    }
};
