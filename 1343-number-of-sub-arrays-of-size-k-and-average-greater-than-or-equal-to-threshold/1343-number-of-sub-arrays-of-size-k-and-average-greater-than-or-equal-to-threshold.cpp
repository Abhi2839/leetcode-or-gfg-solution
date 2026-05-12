class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int cnt = 0, sum = 0;

        for (int i = 0; k > i; i++)
            sum += arr[i];

        if (sum / k >= threshold)
            cnt++;
        for (int i = k; n > i; i++) {
            // reducing the window size
            sum += arr[i] - arr[i - k];
            if (sum / k >= threshold)
                cnt++;
        }
        return cnt;
    }
};