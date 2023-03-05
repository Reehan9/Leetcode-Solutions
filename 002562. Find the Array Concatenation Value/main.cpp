class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
      if(nums.size()==1) return nums[0];
      vector<string>number;
        int right = nums.size()-1;
        int left = 0;
        while(left<right){
          string ls = to_string(nums[left]);
          string rs = to_string(nums[right]);
          number.push_back(ls+rs);
          left++ , right--;
          if(left==right) {number.push_back(to_string(nums[left])); break;}
        }
      long long  int sum = 0;
       for(int i = 0 ; i < number.size() ; i++){
         sum = sum + stoi(number[i]);
     }
     return sum;
    }
};
