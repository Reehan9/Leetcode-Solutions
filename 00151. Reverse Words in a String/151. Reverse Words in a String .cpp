class Solution {
public:
    string reverseWords(string s) {
        vector<string>ans;
        string answer = "";
        for(int i = 0 ; i < s.size() ; i++){
            if(isalpha(s[i]) || isdigit(s[i])){
              answer = answer + s[i];
              if(s[i+1]==' ' || i+1>=s.size()){
                  ans.push_back(answer);
                  answer = "";
            }
        }
    }
                    answer = "";
           for(int i = ans.size()-1 ; i >=0; i--){
               answer += ans[i];
               if(i!=0)
               answer = answer + ' ';
           }
        return answer;
    }
};