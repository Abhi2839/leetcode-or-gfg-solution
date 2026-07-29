class Solution {
	public:
	string encode(vector<string>& arr) {
		// write your logic to encode the strings
		string s = "";
		for (auto x:arr) {
			s += to_string(x.length()) + "#" + x;
		}
		return s;
	}
	
	vector<string> decode(string& s) {
		// write your logic to decode the string
		vector<string>ans;
		int j = 0;
		while (s.size()>j) {
			int i = j;
			while (s[i] != '#')
				i++;
			
			int len = stoi(s.substr(j, i - j));
			ans.push_back(s.substr(i + 1, len));
			j = i + 1+len;
			
		}
		return ans;
	}
};
