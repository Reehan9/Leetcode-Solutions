class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>vec;
        unordered_map<int,int>check;
        for(int i = 0 ; i < nums.size() ; i++)  {
                check[nums[i]]++;
                if(check[nums[i]]==2)
                vec.push_back(nums[i]);
        }
        return vec;
    }
};