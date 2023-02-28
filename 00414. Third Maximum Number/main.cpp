class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int counter = 0 ;
        int result = 0;
        sort(nums.begin() , nums.end() , greater<int>());
        for(int i = 0 ; i < nums.size() ; i++){
            if(i==0||(i>0 && nums[i]!=nums[i-1])){
                result = nums[i];
                counter++;
            }
            if(counter==3) return result;
        }
            return *max_element(nums.begin(), nums.end());
    }
};
