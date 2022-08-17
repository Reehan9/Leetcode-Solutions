class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int acc = accumulate(nums.begin() , nums.end() , 0); // Returns the sum of the array
        int count = (acc-target)/2; // Reducing the problem to subset problem
        if((acc+target)%2!=0) return 0; // Checking conditions for odd occurances
        return countWays(nums,count); // Function call
    }
    int countWays(vector<int>& nums ,int sum){
        if(sum<0) return 0; // If sum is negative
        int dp[nums.size()+1][sum+1]; // Intialising a 2D array
        for(int j = 0 ; j < sum+1 ; j++) 
             dp[0][j] = 0; // Intialising coloumn to zero
        for(int i = 0 ; i < nums.size()+1 ; i++)
             dp[i][0] = pow(2,(count(nums.begin() , nums.begin()+i , 0))); // Since zeroes do occur , we need to tabulate the number of zeros
        // The below approach is same as 0/1 Knapsack
        for(int i= 1;i<=nums.size();i++){  
            for(int j=1;j<=sum;j++){
                if(j>=nums[i-1])
                    dp[i][j]=dp[i-1][j] + dp[i-1][j-nums[i-1]];
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[nums.size()][sum];
    }
};
