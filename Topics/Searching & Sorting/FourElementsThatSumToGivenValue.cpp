vector<vector<int> > fourSum(vector<int> &arr, int k) {
    vector<vector<int>> res;
    if(arr.empty()){
        return res;
    }
    int n=arr.size();
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int subTarget = k - arr[j] - arr[i];
            int lo = j+1;
            int hi = n-1;
            while(lo<hi){
                if(arr[lo]+arr[hi]<subTarget){
                    lo++;
                } else if(arr[lo]+arr[hi]>subTarget){
                    hi--;
                } else{
                    vector<int> quad(4, 0);
                    quad[0] = arr[i];quad[1]=arr[j];quad[2]=arr[lo];quad[3]=arr[hi];
                    res.push_back(quad);
                    
                    while(lo<hi && arr[lo]==quad[2]){
                        lo++;
                    }
                    while(hi>lo && arr[hi]==quad[3]){
                        hi--;
                    }
                }
            }
            while(j<n && arr[j]==arr[j+1]){
                j++;
            }
        }
        while(i<n && arr[i]==arr[i+1]){
                i++;
            }
    }
    return res;
