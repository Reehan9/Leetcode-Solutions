class Solution {
public:
    int percentageLetter(string s, char letter) {
        return double(count(s.begin() , s.end() , letter))/s.size()*100;
    }
};