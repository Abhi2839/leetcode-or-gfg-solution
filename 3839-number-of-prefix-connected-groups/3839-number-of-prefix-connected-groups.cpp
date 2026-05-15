class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        //  unorered mp
        //  first element will store first k char
        // second element complete word
        // /then count the elements in second min 2

        unordered_map<string, vector<string>> ans;

        for (auto& x : words) {

            if (x.size() < k)
                continue;

            ans[x.substr(0, k)].push_back(x);
        }

        int cnt = 0;

        for (auto& it : ans) {

            if (it.second.size() >= 2)
                cnt++;
        }

        return cnt;
    }
};
