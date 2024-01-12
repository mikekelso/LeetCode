class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(merged));
        for (auto i: merged){
            cout << i << endl;
        }

        int mergedLength = merged.size();
        if(mergedLength %2 == 0) {
            double middle = (merged[mergedLength/2] +merged[mergedLength/2-1])/2.0;
            return middle;
        }
        else {
            return double(merged[mergedLength/2]);
        }
        

    }
};
