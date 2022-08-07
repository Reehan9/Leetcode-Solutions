class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1)
            return nums.size();
        int counter = 0, sum = 0;
        sort(nums.begin() , nums.end());
        for(int i = 0 ; i+1 < nums.size() ; i++){
            if(nums[i]+1==nums[i+1])
                counter++;
            else{
                sum = max(sum,counter);
                if(nums[i]!=nums[i+1])
                counter=0;
        }
        }
        return max(counter,sum)+1;
    }
};