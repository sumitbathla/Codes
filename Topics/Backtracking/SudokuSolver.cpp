class Solution {
  public:
    bool isSafe(int grid[N][N], int row, int col, int num){
        
        for(int j=0; j<N; j++){
            if(grid[row][j]==num){
                return false;
            }
        }
        
        for(int i=0; i<N; i++){
            if(grid[i][col]==num){
                return false;
            }
        }
        
        int sr = row - row%3;
        int sc = col - col%3;
        
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(grid[sr+i][sc+j]==num){
                    return false;
                }
            }
        }
        
        return true;
    }
  
    bool solve(int grid[N][N], int row, int col){
        
        if(row==N-1 && col==N){
            return true;
        }
        
        if(col==N){
            row++;
            col=0;
        }
        
        
        
        if(grid[row][col]>0){
            return solve(grid, row, col+1);
        } 
        
        for(int num=1; num<=N; num++){
            if(isSafe(grid, row, col, num)){
                grid[row][col] = num;
                if(solve(grid, row, col+1)){
                    return true;
                }
                grid[row][col] = 0;
            }
        }
        return false;
    }
  
    bool SolveSudoku(int grid[N][N])  
    { 
        return solve(grid, 0, 0);
    }
    
    void printGrid (int grid[N][N]) 
    {
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                cout<< grid[i][j] << " ";
            }
        }
    }
};
