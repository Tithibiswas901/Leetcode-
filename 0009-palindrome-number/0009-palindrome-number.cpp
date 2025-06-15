class Solution {
public:
    bool isPalindrome(int x) {
        long long revNum= 0;
        long long dup = x;
        while(x>0){
            int ld = x % 10;
            revNum = (revNum *10 + ld);
            x = x/10;
        }
        if(dup == revNum) { return true ;}
        else { return false ;}
    }
};