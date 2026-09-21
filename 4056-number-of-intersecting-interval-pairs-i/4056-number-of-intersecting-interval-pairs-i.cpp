class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& arr) {
        int cnt = 0;
        int n = arr.size();

        for (int i = 0; n > i; i++) {
            for (int j = i + 1; n > j; j++) {
                if (arr[i][1] >= arr[j][0] and arr[i][0] <= arr[j][1])
                    cnt++;
            }
        }
        return cnt;
    }
};