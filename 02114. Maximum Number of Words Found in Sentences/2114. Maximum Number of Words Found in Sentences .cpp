/*Brute Force Approach*/
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int counter = 0;
        int var = 0;
        for(int i = 0 ; i < sentences.size() ; i++){
            for(int j = 0 ; j < sentences[i].size() ; j++){
                if(sentences[i][j]==32)
                    var++;
            }
             counter = max(counter , var);
             var = 0;
        }
        return counter+1;
    }
        
};
