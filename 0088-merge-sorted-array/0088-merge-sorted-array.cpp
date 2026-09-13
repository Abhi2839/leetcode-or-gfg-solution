class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr(m + n);
        int idx = 0;

        for (int i = 0; i < m; i++) {
            arr[idx++] = nums1[i];
        }
        for (int j = 0; j < n; j++) {
            arr[idx++] = nums2[j];
        }

        sort(arr.begin(), arr.end());

        for (int i = 0; i < m + n; i++) {
            nums1[i] = arr[i];
        }
    }
};