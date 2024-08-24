class Solution{
private:
    void dfsTraversal(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &grid, int frow, int fcol){
        vis[row][col] = 1;
        for(int i = -1; i <= 1;i++ ){
            for(int j = -1; j<= 1; j++){
                int nrow = row + i;
                int ncol = col + j;
                if(nrow < frow && nrow >= 0 && ncol < fcol && ncol >= 0 && !vis[nrow][ncol] && grid[nrow][ncol] == '1'){
                    dfsTraversal(nrow,ncol,vis,grid,frow,fcol);
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>> &grid){
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m,0));

        int count = 0;
        for(int i = 0; i< n;i++){
            for(int j = 0; j< m;j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    count++;
                    dfsTraversal(i,j,vis,grid,n,m);
                }
            }
        }
        return count;
    }
};
