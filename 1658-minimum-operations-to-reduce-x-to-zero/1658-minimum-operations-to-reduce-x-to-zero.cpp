class Solution {
public:
    int minOperations(vector<int>& arr, int x) {
        int max_sum = reduce(arr.begin(), arr.end()) - x;
        if (max_sum < 0)
            return -1;

        int ans = -1, i = 0, sum = 0, n = arr.size();
        for (int j = 0; j < n; j++) {
            sum += arr[j];
            while (sum > max_sum)
                sum -= arr[i++];

            if (sum == max_sum)
                ans = max(ans, j - i + 1);
        }

        return ans < 0 ? -1 : n - ans;
    }
};