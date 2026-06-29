class Solution {
public:
    int numOfStrings(vector<string>& arr, string str) {
        // word.contains(word[i])
        int cnt = 0;
        for (auto x : arr) {
            if (str.contains(x))
                cnt++;
        }
        return cnt;
    }
};