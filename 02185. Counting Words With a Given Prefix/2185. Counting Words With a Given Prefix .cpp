class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
            int count = 0;
        for(int i = 0 ; i < words.size() ; i++){
                if(!(isSubstring(pref , words[i])))
                        count++;
        }
            return count;
    }
     int isSubstring(string s1, string s2) {
             if (s2.find(s1) != string::npos)
             return s2.find(s1);
             return -1;
         }
};