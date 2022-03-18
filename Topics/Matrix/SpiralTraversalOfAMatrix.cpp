vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
{
    // code here 
    vector<int> v;
    
    int t=0, w=c-1, d=r-1, l=0;
    int dir=0;
    
    while(t<=d && l<=w){
        if(dir==0){
            for(int i=l; i<=w; i++){
                v.push_back(matrix[t][i]);
            }
            t++;
        } else if(dir==1){
            for(int i=t; i<=d; i++){
                v.push_back(matrix[i][w]);
            }
            w--;
        } else if(dir==2){
            for(int i=w; i>=l; i--){
                v.push_back(matrix[d][i]);
            }
            d--;
        } else if(dir==3){
            for(int i=d; i>=t; i--){
                v.push_back(matrix[i][l]);
            }
            l++;
        }
        
        dir= (dir+1)%4;
    }
    
    return v;
}
