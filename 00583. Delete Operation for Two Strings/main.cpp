class Solution {
public:
    int minDistance(string text1, string text2) {
             vector<vector<int>>board(text1.size()+1 , vector<int>(text2.size()+1 , -1));
        return minSteps(text1 , text2 , text1.size() , text2.size() , board);   
    }

    int minSteps(string &x , string &y  , int m , int n , vector<vector<int>>&board){
        if(m==0)
            return n;
        if(n==0) return m;
    if(board[m-1][n-1]!=-1) return board[m-1][n-1];
         if(x[m-1]==y[n-1])
                return  board[m-1][n-1] = minSteps(x , y , m-1 , n-1 , board);
        return board[m-1][n-1] = min (1+minSteps(x , y , m , n-1 , board) , 1+minSteps(x , y , m-1 , n , board)) ;
    }
};
