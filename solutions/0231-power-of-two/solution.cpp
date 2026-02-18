class Solution {
public:
    bool isPowerOfTwo(int n) {

    if(n<0){
        return false;
    }
    int x = 0;
    while((long)pow(2,x)!=n){
        if(pow(2,x)>n){
            return false;
            break;
        }
        x++;
    }
    if((long)pow(2,x)==n){
        return true;
    }
    return 0;
        }
    
};
