class Solution {
public:
    char repeatedCharacter(string s) {
        int i = 0;
        unordered_map<char , int>check;
        for(i = 0 ; i < s.size() && ++check[s[i]]<=2; i++ , check[s[i]]++);
                return s[i];
    }
};