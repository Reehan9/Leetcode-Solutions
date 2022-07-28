class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0;
        int count = 0 ; 
        for(int i  =  0 ; i < nums.size() ; i++){
            if(nums[i]==0){
             counter = max(counter , count);
             count = 0;
            }
            else 
                count++;
        }
        return max(counter,count);
    }
};