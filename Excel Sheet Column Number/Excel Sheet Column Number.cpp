class Solution {
public:
    int titleToNumber(string s) {
        int i=0;
        int num=0;
        while(s[i]!='\0'){
            num = num * 26 + (s[i++]-'A'+1);
        }
        return num;
    }
};