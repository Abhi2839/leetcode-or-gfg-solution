class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        //  first 1 10 11 12 13 14
        // converting into str

        vector<string> temp;
        for (int i = 1; n >= i; i++)
            temp.push_back(to_string(i));
        sort(temp.begin(), temp.end());
        for (auto x : temp)
            ans.push_back(stoi(x));

        return ans;
    }
};