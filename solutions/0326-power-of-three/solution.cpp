class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;

        int curr = n;

        while(curr % 3 == 0){
            curr = curr / 3;
        }

        if(curr == 1) return true;

        return false;
    }
};
