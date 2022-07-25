class Solution {
public:
    int countElements(vector<int>& nums) {
        int maxi = *max_element(nums.begin() , nums.end()); 
        int mini = *min_element(nums.begin() , nums.end());
        int a = count(nums.begin() , nums.end() ,maxi);
        int b = count(nums.begin() , nums.end() ,mini);
        if(maxi==mini)
            return 0;
        return nums.size()-a-b;
        
    }
};