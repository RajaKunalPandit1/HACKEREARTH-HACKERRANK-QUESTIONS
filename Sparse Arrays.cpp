Output Status:

Compiler Message
Success

/*
 * Complete the 'matchingStrings' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY strings
 *  2. STRING_ARRAY queries
 */

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
        
       vector<int> res;
       int n1 = strings.size();
       int n2 = queries.size();
       
       unordered_map<string, int> m;
       
       for(int i=0;i<n1;i++){
           m[strings[i]]++;
       } 
       for(int i=0;i<n2;i++){
       
            if(m.find(queries[i])!= m.end()){
                for(auto x:m){
                    if(x.first == queries[i]){
                        res.push_back(x.second);
                    }
                }
            }else{
                res.push_back(0);
            }
        
       }
        return res;
}
