class Solution {
public:
    bool isPalindrome(string s) {
        return [&](){ string t; for(char c:s) if(isalnum(c)) t+=tolower(c); return t==string(t.rbegin(), t.rend()); }();
    }
};
