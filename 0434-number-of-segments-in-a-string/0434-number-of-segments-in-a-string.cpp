class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        string words;
        int cnt = 0;
        while (ss >> words)
            cnt++;
        return cnt;
    }
};