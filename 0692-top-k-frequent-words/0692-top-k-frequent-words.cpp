class Solution {
public:
    using pp = pair<int, string>;
    struct cmp {
        bool operator()(const pp& a, const pp& b) const {
            if (a.first == b.first)
                return a.second > b.second;
            return a.first < b.first;
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) {

        priority_queue<pp, vector<pp>, cmp> pq;
        unordered_map<string, int> mp;
        for (auto x : words)
            mp[x]++;
        vector<string> ans;
        for (auto& x : mp) {
            pq.push({x.second, x.first});
        }

        while (k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};