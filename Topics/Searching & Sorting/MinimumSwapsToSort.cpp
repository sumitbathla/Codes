int minSwaps(vector<int>&nums){
    vector<pair<int, int>> v(nums.size());
    for(int i=0; i<nums.size(); i++){
        v[i] = {nums[i], i};
    }
    sort(v.begin(), v.end());
    int c=0;
    for(int i=0; i<v.size(); i++){
        if(v[i].second==i){
            continue;
        } else{
            c++;
            swap(v[i], v[v[i].second]);
            i--;
        }
    }
    return c;
