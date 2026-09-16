class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {

        unordered_map<int, vector<int>> mpp;
        
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]].push_back(i);
        }
        int cnt = 0;
        for (auto& [val, arr] : mpp) {
            if (arr.size() == 3) {
                int a = arr[0];
                int b = arr[1];
                int c = arr[2];
                if (b - a == c - b) {
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
};