class Solution {
public:
    bool isPalindrome(int x) {
        long long ans=0, n=x;
        if(n<0)
        return 0;
      while(n)
      {
        int r=n%10;
        n/=10;
        ans=ans*10+r;
        if(ans>INT_MAX || ans<INT_MIN ){
        return 0;}
      } 
      if(ans==x) 
      return 1;
      else 
      return 0;
    }
};
