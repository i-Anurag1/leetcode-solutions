class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        if (n == 0) return;
        if (n == 1) return;
        
        int i;
        int j;
        int temp;
        
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        for (i = 0; i < n; i++) {
            int left = 0;
            int right = n - 1;
            
            while (left < right) {
                temp = matrix[i][left];
                matrix[i][left] = matrix[i][right];
                matrix[i][right] = temp;
                
                left++;
                right--;
            }
        }
    }
};
