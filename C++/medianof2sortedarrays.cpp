class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> merge;
        int i = 0, j = 0;
        while (i < n1 && j < n2) {
            if (nums1[i] <= nums2[j]) {
                merge.push_back(nums1[i]);
                i++;
            } else {
                merge.push_back(nums2[j]);
                j++;
            }
        }
        while (i < n1) {
            merge.push_back(nums1[i]);
            i++;
        }
        while (j < n2) {
            merge.push_back(nums2[j]);
            j++;
        }

        int n = merge.size();
        double median;

        if (n % 2 == 0) {
            median = (merge[n/2] + merge[n/2 - 1]) / 2.0;
        } else {
            median = merge[n/2];
        }

        return median;
    }
};  