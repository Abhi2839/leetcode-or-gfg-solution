class Solution {
	public:
	int missingNumber(vector<int> &nums) {
		// code here
		int n = nums.size();
		vector<int> indices(n);
		iota(indices.begin(), indices.end(), 0);
	sort(indices.begin(), indices.end(), [&](int a, int b) {
			return nums[a] < nums[b];
		});
		
		int tgt = 1;
		for (int idx : indices) {
			if (nums[idx] == tgt) {
				tgt++;
			} else if (nums[idx] > tgt) {
				break;
			}
		}
		
		return tgt;
	}
};
