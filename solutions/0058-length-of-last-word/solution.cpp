class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.find_last_not_of(' ');
        return i < 0 ? 0 : i - s.find_last_of(' ', i);
    }
};
