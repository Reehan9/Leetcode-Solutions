class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int counting = 0;
        unordered_map<int ,int>counter;
        for(int i = 0 ;  i < nums.size() ; i++)
         counter[nums[i]]++;
        for(auto p : counter)
            if(p.second>=1 && p.first!=0)
            counting++;
        return counting;
    }
};