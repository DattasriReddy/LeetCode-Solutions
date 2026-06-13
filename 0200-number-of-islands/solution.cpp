class Solution {
private:
    void dfs(vector<vector<char>>& grid,int i,int j,int rows,int coloumns){
        if(i<0 || j<0 || i>=rows || j>=coloumns || grid[i][j]=='0') return;
        grid[i][j]='0';
        dfs(grid,i+1,j,rows,coloumns);
        dfs(grid,i-1,j,rows,coloumns);
        dfs(grid,i,j+1,rows,coloumns);
        dfs(grid,i,j-1,rows,coloumns);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()) return 0;
        int rows=grid.size();
        int coloumns=grid[0].size();
        int islands=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<coloumns;j++){
                if(grid[i][j]=='1'){
                    islands++;
                    dfs(grid,i,j,rows,coloumns);
                }
            }
        }
    return islands;
    }
};
