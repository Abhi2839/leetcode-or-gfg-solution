class Solution {
public:
    vector<vector<int>> generate(int nr) {
        vector < vector<int>> ans;
    
        for (int i = 0; nr > i; i++) {
            vector<int> arr(i + 1, 1);
            if (i == 0) {
                ans.push_back(arr);
                continue;
            }
            for (int j = 1; j<ans[i - 1].size(); j++) {
                arr[j] = ans[i - 1][j] + ans[i - 1][j-1];
            }
            ans.push_back(arr);
        }
        return ans;
    }
};