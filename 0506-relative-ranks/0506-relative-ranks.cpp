class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < score.size(); i++) {
            pq.push({score[i], i});
        }
        vector<string> ans(score.size());
        int cnt = 0;
        while (!pq.empty()) {
            auto pair = pq.top();
            pq.pop();
            cnt++;
            if (cnt == 1)
                ans[pair.second] = "Gold Medal";
            else if (cnt == 2)
                ans[pair.second] = "Silver Medal";
            else if (cnt == 3)
                ans[pair.second] = "Bronze Medal";
            else
                ans[pair.second] = to_string(cnt);
        }

        return ans;
    }
};