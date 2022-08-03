class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int size = nums.size();
        unordered_map<int ,int>check;
        for(int i = 0 ; i <  nums.size() ; i++){
               check[nums[i]]++;
        }
        int pair = 0;
        for(auto p: check){
            if(p.second%2==0){
               pair = pair+p.second/2;
            }
            else{
                if(p.second>2){
                    pair = pair + ((p.second-1)/2);
                }
            }
        }
        return {pair , size-(2*pair)};
    }
};