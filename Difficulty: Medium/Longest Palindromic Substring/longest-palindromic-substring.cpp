class Solution {
	public:
	string getLongestPal(string &s) {
		// code here
		int n = s.length();
		int len = 1;
		int startIdx = 0;
		
		for (int i = 0; n>i; i++) {
			int l = i, r = i;
			
			//   odd
			while (l >= 0 and n>r and s[l] == s[r]) {
				if (r + 1 - l>len) {
					len = r + 1 - l;
					startIdx = l;
				}
				l--;
				r++;
			}
			
			l = i , r = i+1;
			
			//   even
			while (l >= 0 and n>r and s[l] == s[r]) {
				if (r + 1 - l>len) {
					len = r + 1 - l;
					startIdx = l;
				}
				l--;
				r++;
			}
		}
		return s.substr(startIdx, len);
	}
};
