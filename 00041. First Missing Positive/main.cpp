class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int , bool>check;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]>=0)
            check[nums[i]] = true;
        }
        for(int j = 1 ; j <= check.size() ; j++){
            if(check[j]==false)
              return j;
        }
                 // cout<<check.size();
        if(*max_element(nums.begin(),nums.end())<0) return 1;
        return *max_element(nums.begin(),nums.end())+1;
    }
};
