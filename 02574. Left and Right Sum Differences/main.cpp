class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        map<int,int>check;
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            check[i] = sum;
            sum = sum+nums[i];
        }
     sum = 0;
     for(int j = nums.size()-1 ; j>=0 ; j--){
         check[j] = abs(check[j]-sum);
         sum = sum+nums[j];
     }
        for(auto p :check){
            nums[p.first] = p.second;
        }
        return nums;
    }
};
