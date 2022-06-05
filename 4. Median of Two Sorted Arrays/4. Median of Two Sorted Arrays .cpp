class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums;
        double median;
        int i = 0;
        int k = nums1.size();
        int n = nums2.size();
        for(i = 0; i < k ; i++){
            nums.push_back(nums1[i]);
        }
        i++;
        for(int j = 0; j < n ; j++){
            nums.push_back(nums2[j]);
        }
        sort(nums.begin(), nums.end());
        int m = nums.size();
        if(m%2!=0){
            return nums[(m-1)/2];
        }
        else {
        m--;
        median  = (double(nums[ceil(double(m)/2)]) + double(nums[floor(double(m)/2)])) /2 ;
            return median;
        }
    }
};