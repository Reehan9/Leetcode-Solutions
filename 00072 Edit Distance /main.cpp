
class Solution {
public:
    int minDistance(string word1, string word2) {
vector<vector<int>> table(word1.size()+1, vector<int>(word2.size()+1, -1));
        return editDistance(word1, word2, table ,0, 0);
    }
    
    int editDistance(string w1, string w2, vector<vector<int>>&table,int i, int j) {
        if(table[i][j]!=-1) return table[i][j];
        if (i == w1.size()) return  table[i][j] =  w2.size() - j;
        if (j == w2.size())  return table[i][j] =  w1.size() - i;
        
        if (w1[i] == w2[j]) {
            return  table[i][j] = editDistance(w1, w2, table,i + 1, j + 1);
        } else {
            return  table[i][j] = 1 + min({
                editDistance(w1, w2, table ,i, j + 1),      
                editDistance(w1, w2,table ,i + 1, j),      
                editDistance(w1, w2, table,i + 1, j + 1)   
            });
        }
    }
};
