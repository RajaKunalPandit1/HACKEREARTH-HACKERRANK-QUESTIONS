Output Status:

Compiler Message
Success

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int camelcase(string s) {
    
    int res = 1;
    int n = s.length();
    
    for(int i=1;i<n;i++){
        if(isupper(s[i])){
            res++;
        }else {
        continue;
        }
    }
    return res;
    
}
