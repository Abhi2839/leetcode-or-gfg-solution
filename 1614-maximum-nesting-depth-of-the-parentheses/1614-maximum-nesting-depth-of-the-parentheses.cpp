class Solution {
public:
    int maxDepth(std::string s) {
        int cnt = 0;
        int r = 0;
        for (char c : s) {
            if (c == ')') {
                cnt--;
                continue;
            }
            if (c != '(') continue;
            cnt++;
            
            if (cnt > r) r = cnt;
        }
        return r;
    }
};