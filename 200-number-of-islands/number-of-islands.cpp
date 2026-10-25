class Solution {
private:
void bsf(int r, int c ,vector<vector<char>>& grid,  vector<vector<int>> &vis){
    vis[r][c] = 1;
    queue<pair<int,int>> q;
    int n = grid.size();
    int m = grid[0].size();
    

    q.push({r,c});

    int drow[] = {-1,0,1,0};
    int dcol[] = {0,1,0,-1};

    while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        for(int i =0; i<4; i++){
            
                int nrow =  row + drow[i];
                int ncol =  col + dcol[i];
              if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol] == '1' && !vis[nrow][ncol]){
                vis[nrow][ncol] =1;
                q.push({nrow,ncol});
              }
            }
        }

    }
   
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n,vector<int> (m,0));

        int count =0;

        for(int i =0; i<n; i++){
            for(int j=0; j<m; j++){
                if(vis[i][j] == 0 && grid[i][j] == '1'){
                    count++;
                    bsf(i, j , grid , vis);
                }
            }
        }       
    return count;    
    }
};