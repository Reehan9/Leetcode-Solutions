class Solution {
public:
    bool detectCapitalUse(string word) {
        string word1 = word;
        string word2 = word;
        string word3 = word;
        word1[0] = toupper(word1[0]);
        transform(word1.begin() + 1, word1.end(), word1.begin() + 1,
        [](unsigned char c) { return tolower(c); });
        transform(word2.begin() , word2.end(), word2.begin(),
        [](unsigned char c) { return tolower(c); });
        transform(word3.begin() , word3.end(), word3.begin(),
        [](unsigned char c) { return toupper(c); });
//         cout<<word1<<" "<<word2<<" "<<word3<<endl;
        return word==word1 || word==word2 || word==word3;

    }
};
