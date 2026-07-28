class Solution {
	public:
	bool isSubSeq(string& s2, string& s1) {
		// code
		int i = 0, j = 0;
		int l2 = s2.length();
		int l1 = s1.length();
		while (l1>i and l2>j) {
			if (s1[i] == s2[j])
				j++;
			i++;
		}
		return j == l2;
		
	}
};
