class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
      vector<int>intersect;
  set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(),
  back_inserter(intersect));
  if(intersect.empty()) return -1;
  return *min_element(intersect.begin() , intersect.end());
    }
};
