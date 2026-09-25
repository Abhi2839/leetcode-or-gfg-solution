class Solution {
public:
    bool isPalindrome(string s) {
        string x="";
        for (int i=0;s.length()>i;i++){
            if (isalnum(s[i])){
                x+=tolower(s[i]);
            }
        }
        string y=x;
        reverse(y.begin(),y.end());
        return y==x;
    }
};