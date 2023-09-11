#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        queue<pair<int, int>> q;  // To store coordinates of rotten oranges
        int freshCount = 0;  // Count of fresh oranges
        int minutes = 0;  // To store the time taken to rot all oranges

        // Step 1: Find initial count of fresh oranges and add rotten oranges to queue
        for(int i = 0; i < m; ++i) {
            for(int j = 0; j < n; ++j) {
                if(grid[i][j] == 1) freshCount++;
                if(grid[i][j] == 2) q.push({i, j});
            }
        }

        // Step 2: Directions array to find adjacent cells
        vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        // Step 3: BFS traversal to rot adjacent oranges
        while(!q.empty() && freshCount) {
            int size = q.size();
            minutes++;  // Increase time counter
            while(size--) {
                auto [x, y] = q.front(); q.pop();
                for(auto& d : directions) {
                    int nx = x + d[0], ny = y + d[1];
                    // If the adjacent cell is a fresh orange, rot it and decrease the fresh count
                    if(nx >= 0 && nx < m && ny >= 0 && ny < n && grid[nx][ny] == 1) {
                        grid[nx][ny] = 2;
                        q.push({nx, ny});
                        freshCount--;
                    }
                }
            }
        }

        // Step 4: If fresh oranges are left, return -1
        return freshCount ? -1 : minutes;
    }
};
