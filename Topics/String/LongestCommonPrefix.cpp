string longestCommonPrefix(vector<string>& strs) {
    string ans = "";
    if(strs.size()==0){
        return ans;
    }
    if(strs[0].length()==0){
        return ans;
    }
    
    for(int i=0; i<strs[0].length(); i++){
        int f=0;
        for(int j=1; j<strs.size(); j++){
            if(strs[0][i]!=strs[j][i]){
                f=1;
            }
        }
        if(f==0){
            ans+=strs[0][i];    
        }
        if(f==1){
            break;
        }
    }
  
    return ans;
}
