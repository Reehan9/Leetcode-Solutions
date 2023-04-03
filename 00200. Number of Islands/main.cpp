class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
        
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(!visited[i][j] && grid[i][j] == '1') {
                    bfs(grid, visited, i, j);
                    count++;
                }
            }
        }
        return count;
    }

private:
    void bfs(vector<vector<char>>& grid, vector<vector<bool>>& visited, int row, int col) {
        int m = grid.size();
        int n = grid[0].size();
        
        stack<pair<int, int>> q;
        q.push({row, col});
        visited[row][col] = true;
        
        vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        
        while(!q.empty()) {
            pair<int, int> cur = q.top();
            q.pop();
            
            for(pair<int,int> dir : directions) {
                int newRow = cur.first + dir.first;
                int newCol = cur.second + dir.second;
                
                if(newRow >= 0 && newRow < m && newCol >= 0 && newCol < n && grid[newRow][newCol] == '1' && !visited[newRow][newCol]) {
                    q.push({newRow, newCol});
                    visited[newRow][newCol] = true;
                }
            }
        }
    }
};
