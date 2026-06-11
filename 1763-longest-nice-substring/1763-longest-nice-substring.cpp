class Solution {
public:
     bool isNice(string str){
        for(char ch :str){
            bool found = false;
            for(char c : str){
                if(islower(ch) && c == toupper(ch)){
                    found = true;
                    break;
                }
                if(isupper(ch) && c == tolower(ch)){
                    found = true;
                    break;
                }
            }
            if(!found)
            return false;
        }
      return true;  
     }
    string longestNiceSubstring(string s) {
        string ans ="";
        int n = s.size();
        for(int i=0;i<n;i++){
            string curr = "";
            for(int j = i;j<n;j++){
                curr= curr +s[j];
                if(isNice(curr)){
                    if(curr.size()>ans.size()){
                        ans = curr;
                    }
                }
            }
        }
        return ans;
    }
};