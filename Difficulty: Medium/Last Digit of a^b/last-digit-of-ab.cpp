class Solution {
  public:
    int getLastDigit(string& a, string& b) {
        // code here
        // extracting the last digit from string a
        if(b[0]=='0') return 1;
        int last_digit=a[a.length()-1]-'0';
 //   cycle //         0 1 2 3 4 5 6 7 8 9
        int cycle[10]={1,1,4,4,2,1,1,4,4,2};
        // 0,1,2,3,4,5,6,7,8,9
        // 8 4 2 6
        int num =0;
        for (char ch:b)
            num=(num*10+(ch-'0'))%cycle[last_digit];
        // last digit =>3   0 1 2 3
        // int ans=1;
        if (num==0) num=cycle[last_digit];
int ans=1;
while(num--) ans*=last_digit;
        return ans%10;
    }
};

