class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>ans(m,string(n,'#'));
int i=0,j=0;
        ans[0][0]='.';
        while(n-1>j) ans[i][++j]='.';
         while(m-1>i) ans[++i][j]='.';
        return ans;
    }
};