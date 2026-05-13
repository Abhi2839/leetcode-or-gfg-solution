class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        // using o(n) space

        // vector<string> temp;
        // for (int i = 1; n >= i; i++)
        //     temp.push_back(to_string(i));
        // sort(temp.begin(), temp.end());

        // for (auto x : temp)
        //     ans.push_back(stoi(x));

        // using constant space
        int ele = 1;
        for (int i = 0; n > i; i++) {
            ans.push_back(ele);

            if (n >= ele * 10)
                ele *= 10;
            else {
                while (ele % 10 == 9 or ele + 1 > n)
                    ele /= 10;
                ele++;
            }
        }
        return ans;
    }
};