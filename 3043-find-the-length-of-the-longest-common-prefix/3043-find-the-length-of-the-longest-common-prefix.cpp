class Solution {
public:
    int no_digit(int n) {
        int cnt = 0;
        while (n > 0) {
            cnt++;
            n /= 10;
        }
        return cnt;
    }
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int ans = 0, len = 0;
        unordered_set<int> st; // to avoid duplicate elements
                               // add elements of arr1 into set with prefix
        for (auto x : arr1) {
            while (x > 0) {
                st.insert(x);
                x /= 10;
            }
        }
        for (auto y : arr2) {
            len = no_digit(y);
            while (y > 0) {
                if (st.count(y)) {
                    ans = max(ans, len);
                    break;
                }
                y /= 10;
                len--;
            }
        }
        return ans;
    }
};