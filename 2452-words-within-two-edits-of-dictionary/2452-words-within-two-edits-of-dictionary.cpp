class Solution {
public:
    vector<string> twoEditWords(vector<string>& que, vector<string>& arr) {
        int n = que.size(), m = arr.size();
        vector<string> ans;
        for (int i = 0; n > i; i++) {
            string x = que[i];

            for (int j = 0; m > j; j++) {
                string y = arr[j];
                int len = y.length();
                int cnt = 0;
                for (int k = 0; len > k; k++) {
                    if (x[k] != y[k])
                        cnt++;
                        if (cnt>2) break;
                }
            
            if (cnt <= 2){
                ans.push_back(x);
                break;}
        }}
        return ans;
    }
};