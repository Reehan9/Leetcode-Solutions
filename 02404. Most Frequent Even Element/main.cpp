class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>check;
        int ans = 0;
        int maxi = INT_MIN;
        for(int i = 0 ; i < nums.size() ; i++){
        if(!(nums[i]&1) || nums[i]==0)
            check[nums[i]]++;
        }
        if(check.empty()) return -1;
        for(auto p :check){
            maxi = max(p.second , maxi);
        }
        for(auto p:check){
          //  cout<<p.first<<" "<<p.second<<" "<<endl;
            if(p.second==maxi) return p.first;
        }
        
        return -1;
    }
};
