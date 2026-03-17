class Solution {
public:
    string reverseVowels(string s) {
        int k = s.size();
        
        int i = 0;
        int j = k - 1;
        
        while(i < j){
            
            if ((s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='U'||s[i]=='E'||s[i]=='I'||s[i]=='O') &&
                (s[j]=='a'||s[j]=='A'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='U'||s[j]=='E'||s[j]=='I'||s[j]=='O')){
                
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if (!(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='U'||s[i]=='E'||s[i]=='I'||s[i]=='O')){
                i++;
            }
            else{
                j--;
            }
        }
        
        return s;
    }
};
