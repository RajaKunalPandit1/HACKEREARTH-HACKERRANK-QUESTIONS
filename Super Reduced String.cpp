Output Status:

Compiler Message
Success


/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string superReducedString(string s) {

    int n = s.length();
    stack<char> st;
    string res;
    
    for(int i=0;i<n;i++){
        if(st.empty()){
            st.push(s[i]);
        }else{
            if(s[i] == st.top()){
                st.pop();
                continue;
            }else{
                st.push(s[i]);
            }
        }
    }
    
   if(st.empty()){
       res = res+ "Empty String";
   }else{
        while(!st.empty()){
        res+= st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
   }
    return res;

}
