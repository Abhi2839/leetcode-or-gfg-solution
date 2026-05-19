class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        //  size
        // comapre form idx to 0 to min size of both arr
        // arr1[i]==arr2[j] return ele
        // arr1[i]>arr2[j] j++; else i++;

        int n = nums1.size(), i = 0, j = 0, m = nums2.size();
        while (n > i and m > j) {
            if (nums1[i] == nums2[j])
                return nums1[i];
            if (nums1[i] > nums2[j])
                j++;
            else
                i++;
        }
        return -1;
    }
};