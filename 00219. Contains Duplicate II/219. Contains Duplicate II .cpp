class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>check;
        for(int i = 0 ; i < nums.size() ; i++)
            check[nums[i]] = -1; 
        for(int i = 0 ; i < nums.size() ; i++){
            if(check[nums[i]] >=0 && abs(i-check[nums[i]])<=k)
                return true;
            check[nums[i]] = i;
        }
            return false;
    }
};
