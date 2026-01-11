class Solution {
public:
    bool isPerfectSquare(int num) {
        int l= 1, h=sqrt(num);
        if(num==1)
            return true;
        while(l<=h)
            {
               int mid = l+(h-l)/2;
                if(mid*mid==num)
                    return true;
                else if(mid>num)
                    h=mid-1;
                else 
                    l=mid+1;
            }
        return false;
    }
    
};
