class Solution {
public:
    int longestPalindromeSubseq(string s) {
        vector<vector<int>>board(s.size()+1 , vector<int>(s.size()+1 , -1));
        string rev = s;
        reverse(rev.begin() , rev.end());
        return LPS(s , rev , s.size() , rev.size() , board);
    }

    int LPS(string &x , string &y  , int m , int n , vector<vector<int>>&board){
        if(m==0||n==0)
            return 0;
    if(board[m-1][n-1]!=-1) return board[m-1][n-1];
         if(x[m-1]==y[n-1])
                return  board[m-1][n-1] = 1+LPS(x , y , m-1 , n-1 , board);
        return board[m-1][n-1] = max (LPS(x , y , m , n-1 , board) , LPS(x , y , m-1 , n , board)) ;
    }
};
