class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<int> ans;
        vector<tuple<int, int, int>> vec; // original val mapped val idx
        // tuple used to map idx instead of pair
        for (int i = 0; nums.size() > i; i++) {
            int x = nums[i];
            string s = to_string(x);
            string ss = "";
            for (auto z : s) {
                ss += to_string(mapping[z - '0']);
            }
            vec.push_back({x, stoi(ss), i});
        }
        // get method is to retrieve elements from the tuple
        sort(vec.begin(), vec.end(), [](auto& a, auto& b) {
            if (get<1>(a) == get<1>(b))
                return get<2>(a) < get<2>(b);
            return get<1>(a) < get<1>(b);
        });

        for (auto& x : vec)
            ans.push_back(get<0>(x));

        return ans;
    }
};