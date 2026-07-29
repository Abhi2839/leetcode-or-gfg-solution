class Solution {
	public:
	vector<string>ans;
	void solve(int n, string s, int i, int j) {
		if (s.length() == n) {
			ans.push_back(s);
			return ;
		}
		if (n/2>i) {
			s.push_back('(');
			solve(n, s, i + 1, j);
			s.pop_back();
		}
		if (i>j) {
			s.push_back(')');
			solve(n, s, i, j + 1);
			s.pop_back();
		}
	}
	vector<string> generateParentheses(int n) {
		// code here
		string s;
		solve(n, s, 0, 0);
		return ans;
	}
};
