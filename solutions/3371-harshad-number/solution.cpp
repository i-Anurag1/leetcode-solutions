class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int s=0;
        int t=x;
        int k;
        while(x>0){
         k = x%10;
        s=s+k;
        x=x/10;
        }
        if(t>0&& t%s==0){
            return s;
        }

        return -1;
        
    }
};
