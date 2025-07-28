class Solution {
public:
    bool isPalindrome(int x) {
        int n=0,k,o=x;
        if(x<0){
            return false;
        }
        while(x!=0){
            if(n>(INT_MAX- o%10)/10){
                return false;
            }
             k=x%10;
            n=n*10+k;
            x=x/10;
        }
        if(n==o){
            return true;
        }
        else{
            return false;
        }
        
    }
};
