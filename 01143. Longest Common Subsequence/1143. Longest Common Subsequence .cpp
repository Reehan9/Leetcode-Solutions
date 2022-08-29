class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text2.size() , n = text1.size(); // Storing the value of the lengths of both the strings
        int dp[m+1][n+1]; // Creating a 2-D Array 
        for(int i = 0 ; i < m+1 ; i++)  // 1
            for(int j = 0 ; j < n+1 ; j++) // 2
                if(i==0 || j==0) // 3
                    dp[i][j] = 0; // 4
/* Lines 1 to 4 signify the intialization of the 2-D array using , here
if the length of either of the strings is zero then obviously the subsequence has to zero*/
        for(int i = 1 ; i < m+1 ; i++){
            for(int j = 1 ; j < n+1 ; j++){
            if(text2[i-1]==text1[j-1]) // If there is match then increase the counter by 1
                    dp[i][j] =  1+dp[i-1][j-1];
                else {
                    dp[i][j] =  max(dp[i][j-1],dp[i-1][j]); // If there is a mismatch we , take maximum of subproblems and store it in the array , in this question the only two subproblems exsist
                    // If it is a substring then the lenght has to be zero
                }
            }
        }
        return dp[m][n]; // The last value stored in the array is the combination of all the subproblems , hence it should contain the resultant value
    }
};
