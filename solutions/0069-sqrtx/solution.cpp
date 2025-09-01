class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1)
        return x;
        for(long long i=0; i<=x;i++){
            long long n=i*i;
            if(n==x)
            return i;
            else if(n>x)
            return i-1;
            
        }
       return 0;
    }
    
};
