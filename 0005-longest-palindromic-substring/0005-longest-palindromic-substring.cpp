class Solution {
public:
     void expandCentre( string s ,int left ,int right,int &start ,int &maxLen){
      while(left>= 0 && right< s.size() && s[left]==s[right]){
          int currLen = right - left +1;
         if(currLen>maxLen){
            maxLen = currLen;
            start = left;
         }
          left --;
          right ++;
      }
  }
    string longestPalindrome(string &s) {
        // code here
        int start =0;
        int maxLen =0;
        for(int i =0;i<s.size();i++){
            //for odd string//
            expandCentre( s, i,i,start ,maxLen);
      //foe even string//
            expandCentre( s ,i,i+1,start , maxLen);
        }
        return s.substr(start ,maxLen );
    }
}; 