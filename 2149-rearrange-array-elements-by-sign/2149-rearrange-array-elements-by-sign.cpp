class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;
        for (auto x : nums)
            if (x > 0)
                pos.push_back(x);
            else
                neg.push_back(x);
        int n = pos.size();
        int i = 0;
        vector<int> ans;
        while (n > i) {
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
            i++;
        }
        return ans;
    }
};