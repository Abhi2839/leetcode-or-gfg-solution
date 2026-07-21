class Solution {
public:
    bool wordPattern(string x, string s) {
        unordered_map<char, string> mp;
        string words;
        stringstream ss(s);
        vector<string> arr;
        while (ss >> words)
            arr.push_back(words);

        for (auto y : arr)
            cout << y << " " << endl;

        int n = arr.size();
        for (int i = 0; n > i; i++) {
            if (mp.find(x[i]) == mp.end()) {
                mp[x[i]] = arr[i];
            } else if (mp[x[i]] != arr[i])
                return 0;
        }
        return 1;
    }
};