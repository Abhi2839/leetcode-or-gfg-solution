class Solution {
public:
void solve(int i,int j ,vector<string> &ans,int n,string s){
    if (s.length()==2*n) {
ans.push_back(s);
return ;
    }
    if (n>i) {
        s.push_back('(');
        solve(i+1,j,ans,n,s);
        s.pop_back();
    }
    if (i>j) {
        s.push_back(')');
        solve(i,j+1,ans,n,s);
        s.pop_back();
    }

}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s;
        solve(0,0,ans,n,s);
        sort(ans.begin(),ans.end());
        return ans;
    }
};