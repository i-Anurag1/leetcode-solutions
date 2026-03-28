class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int m = grid.size();
int n = grid[0].size();

queue<tuple<int,int,int>> q;

vector<vector<vector<int>>> vis(m, vector<vector<int>>(n, vector<int>(1024, 0)));

q.push({0, 0, grid[0][0]});
vis[0][0][grid[0][0]] = 1;

int ans = INT_MAX;

int dx[2] = {0, 1};
int dy[2] = {1, 0};

while(!q.empty()) {
    auto [i, j, x] = q.front();
    q.pop();
    
    if(i == m - 1 && j == n - 1) {
        ans = min(ans, x);
        continue;
    }
    
    for(int d = 0; d < 2; d++) {
        int ni = i + dx[d];
        int nj = j + dy[d];
        
        if(ni < m && nj < n) {
            int nx = x ^ grid[ni][nj];
            
            if(!vis[ni][nj][nx]) {
                vis[ni][nj][nx] = 1;
                q.push({ni, nj, nx});
            }
        }
    }
}

return ans;
    }
};
