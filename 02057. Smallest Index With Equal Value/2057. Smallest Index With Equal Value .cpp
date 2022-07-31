class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int counter = INT_MAX;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]==i%10 && i<counter)
                counter = i;
        }
        if(counter==INT_MAX)
            return -1;
        return counter;
    }
};