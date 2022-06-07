class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>output;
        backtrack(output , "" , 0 , 0 , n);
        return output;
    }
void backtrack(vector<string> &output ,string out, int open , int close, int max){
    if(out.size()==max*2){
        output.push_back(out);
    }
    if(open<max)backtrack(output , out + "(" , open+1 , close , max);
    if(close<open)backtrack(output , out + ")" , open , close+1 , max);
}
    
};