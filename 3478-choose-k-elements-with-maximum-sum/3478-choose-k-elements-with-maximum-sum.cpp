class Solution {
public:
    vector<long long> findMaxSum(vector<int>& nums1, vector<int>& nums2,
                                 int k) {
        int n = nums1.size();
        vector<long long> ans(n, 0);
        vector<pair<int, int>> pr;

        for (int i = 0; i < n; i++)
            pr.push_back({nums1[i], i});

        sort(pr.begin(), pr.end());

        priority_queue<int, vector<int>, greater<int>> pq;
        unordered_map<int, long long> mp;
        long long sum = 0;
        int j = 0;

        for (int i = 0; i < n; i++) {
            int idx = pr[i].second;
            while (j < i) {
                int prev = pr[j].second;
                if (pr[j].first >= pr[i].first)
                    break;

                pq.push(nums2[prev]);
                sum += nums2[prev];

                if (pq.size() > k) {
                    sum -= pq.top();
                    pq.pop();
                }
                
                j++;
            }

            mp[idx] = sum;
        }

        for (int i = 0; i < n; i++)
            ans[i] = mp[i];

        return ans;
    }
};