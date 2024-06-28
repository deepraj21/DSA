bool ismatching(char a , char b){
    if(a == '(' && b == ')' || a == '[' && b == ']' || a == '{' && b == '}'){
        return true;
    }
    else{
        return false;
    }
}

    bool
    isvalid(string s)
{
    stack<int> stk;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            stk.push(s[i]);
        }
        else{
            if(stk.empty()){
                return false;
            }
            else if(ismatching(stk.top(),s[i])){
                stk.pop();
            }
            else{
                return false;
            }
        }
    }
    if(stk.empty()){
        return true;
    }else{
        return false;
    }
}