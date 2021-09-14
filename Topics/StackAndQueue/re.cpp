bool ispar(string x)
{
    // Your code here
    bool flag=true;;
    stack<int> st;
    for(int i=0; i<x.length(); i++){
        if(x[i]=='{' || x[i]=='[' || x[i]=='('){
            st.push(x[i]);
        } else if(x[i]=='}'){
            if(!st.empty() && st.top()=='{'){
                st.pop();
            } else{
                flag=false;break;
            }
        } else if(x[i]==')'){
            if(!st.empty() && st.top()=='('){
                st.pop();
            } else{
                flag=false;break;
            }
        } else if(x[i]==']'){
            if(!st.empty() && st.top()=='['){
                st.pop();
            } else{
                flag=false;break;
            }
        }
    }
    if(st.size()!=0){
        return false;
    }
    return flag;
}
