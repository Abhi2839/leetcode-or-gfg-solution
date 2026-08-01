class Solution {
	public:
	unordered_set<string>st;
	void solve(string &s, int i) {
		if (i == s.size()) {
			st.insert(s);
			return ;
		}
		for (int j = i; s.size()>j; j++) {
			swap(s[j], s[i]);
			solve(s, i + 1);
			swap(s[i], s[j]);
		}
		
	}
	vector<string> findPermutation(string &s) {
		// Code here
		vector<string>ans;
		solve(s, 0);
		for (auto x:st)
			ans.push_back(x);
		
		return ans;
	}
};
