class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;

        int curr = n;

        while(curr % 4 == 0){
            curr = curr / 4;
        }

        if(curr == 1) return true;

        return false;
    }
};
