class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> arr(m + n);

        // merge both arrays
        for (int i = 0; i < m; i++)
            arr[i] = nums1[i];
        for (int j = 0; j < n; j++)
            arr[m + j] = nums2[j];

        sort(arr.begin(), arr.end());

        int total = m + n;
        if (total % 2 != 0) {
            // odd length
            return arr[total / 2];
        } else {
            // even length
            return (arr[total / 2 - 1] + arr[total / 2]) / 2.0;
        }
    }
};