Output Status:

Compiler Message
Success


bool isequal(char a, char b){
    
    if(a== '(' && b == ')'){
        return true;
    }else if(a == '[' && b == ']'){
        return true;
    }else if(a == '{' && b == '}'){
        return true; 
    }else{
        return false;
    }
    
}

string isBalanced(string s) {
    
    int n = s.length();
    stack<char16_t> st;
     string res = "";
    bool flag = true;
    for(int i=0;i<n;i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }else{
            if(st.empty() || isequal(st.top(), s[i]) == false ){
                flag = false;
            }else{
                st.pop();
            }
        }
    }
    if(st.empty() && flag == true){
        res+= "YES";
    }else{
        res+= "NO";
    }
    
    return res;
}
