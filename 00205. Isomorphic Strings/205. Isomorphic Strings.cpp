class Solution {
public:
    bool isIsomorphic(string s, string t) {
            if(s.size()!=t.size())
                    return 0;
        unordered_map<char , char>c1;
        unordered_map<char , char>c2;
            for(int i = 0 ; i < s.size(); i++){
                    c1[s[i]] = t[i];
                    c2[t[i]] = s[i];
            }
            for(int i = 0  ;i < s.size() ; i++){
                    if(c1[s[i]]!=t[i] || c2[t[i]]!=s[i])
                            return 0;
            }
            return 1;
    }
};
