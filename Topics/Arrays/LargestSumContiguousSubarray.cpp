int ma = INT_MIN;
int maxth = 0;
    
for(int i=0;i<n;i++){
  maxth += arr[i];
  if(maxth>ma){
    ma = maxth;
  }z
  if(maxth<0){
    maxth=0;
  }
}
