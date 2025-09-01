class Solution {
public:
    int findComplement(int num) {
        if (num == 1) return 0;
        int p = 1;
        int t = num;

        while (t > 1)  //  finding how many digits are there in binary
        {
            t /= 2;
            p++;
        }

        int tx = pow(2, p) - 1;
        return tx ^ num;
    }
};
