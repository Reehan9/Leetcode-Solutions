class Solution {
public:
    int change(int amount, vector<int>& coins) {;
        return countWays(coins,amount);
    }
    int countWays(vector<int>& nums ,int sum){
        int counter = 0;
      int dp[nums.size()+1][sum+1];
        for(int j = 0 ; j < sum+1 ; j++)
             dp[0][j] = 0; 
        for(int i = 0 ; i < nums.size()+1 ; i++)
             dp[i][0] = 1;
        for(int i= 1;i<=nums.size();i++){
            for(int j=1;j<=sum;j++){
                if(j>=nums[i-1])
                    dp[i][j] = dp[i-1][j] + dp[i][j-nums[i-1]];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[nums.size()][sum];
    }
};