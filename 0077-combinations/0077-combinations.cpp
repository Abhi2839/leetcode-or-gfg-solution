class Solution {
public:
    // int fact(int a) {
    //     if (a==0 or a==1) return 1;
    //     int prod = a;
    //     for (int i = 2; a > i; i++)
    //         prod *= i;
    //     return prod;
    // }
    // generate () similar to that
    void combination(int i, vector<vector<int>>& ans, int k, vector<int>& arr,
                     int n) {
        if (arr.size() == k) {
            ans.push_back(arr);
            return;
        }

        for (int j = i; n >= j; j++) {
            arr.push_back(j);
            combination(j + 1, ans, k, arr, n);
            arr.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        //  int ways=fact(n)/(fact(k)*fact(n-k));
        //  cout<<ways;
        vector<int> arr;
        combination(1, ans, k, arr, n);
        return ans;
    }
};