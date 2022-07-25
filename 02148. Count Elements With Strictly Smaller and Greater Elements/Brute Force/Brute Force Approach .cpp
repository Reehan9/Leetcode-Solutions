class Solution {
public:
    int countElements(vector<int>& nums) {
        int counter = 0;
        int scounter = 0;
        int lcounter = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = 0 ; j < nums.size() ; j++){
                if(i==j)
                    continue;
                if(nums[i]>nums[j])
                    lcounter++;
                if(nums[i]<nums[j])
                    scounter++;
            }
            if(lcounter>=1 && scounter>=1)
              counter++;
            lcounter = 0 , scounter = 0;
        }
            return counter;
    }
};