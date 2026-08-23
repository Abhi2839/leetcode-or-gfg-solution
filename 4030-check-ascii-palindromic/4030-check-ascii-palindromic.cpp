class Solution {
public:
    bool isPalindromic(string s) {
        string str="";
        for (auto x:s){
          str+=bitset<8>(x).to_string();
        }
        int i=0,j=str.size()-1;
        while(j>i){
            if (str[j]!=str[i]) return 0;
            j--;
            i++;
        }
        return 1;
    }
};