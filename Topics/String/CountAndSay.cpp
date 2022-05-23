string countAndSay(int n) {
    string s="1";
    while(--n){
        string ns;
        int i=0;
        while(i<s.length()){
            int count=1;
            while(s[i]==s[i+1] && i<s.length()){
            i++;
            count++;
            }   
            ns += to_string(count) + s[i];
            i++;
        }
        s = ns;
    }
    return s;
}
z
