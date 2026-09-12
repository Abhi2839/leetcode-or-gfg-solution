class Solution {
public:
    unordered_set<int> st;
    string s = "";

    void func(vector<int>& arr, int i, int x = 3) {
        if (s.length() == 3) {
            if (stoi(s) % 2 == 0)
                st.insert(stoi(s));
            return;
        }

        for (int j = i; arr.size() > j; j++) {
            if (s.length() == 0 && arr[j] == 0)
                continue;
            s += char(arr[j] + '0');
            swap(arr[i], arr[j]);
            func(arr, i + 1, 3);
            swap(arr[i], arr[j]);
            s.pop_back();
        }
    }
    vector<int> findEvenNumbers(vector<int>& digits) {
        func(digits, 0);
        vector<int> ans;
        for (auto x : st)
            ans.push_back(x);
        sort(ans.begin(), ans.end());
        return ans;
    }
};