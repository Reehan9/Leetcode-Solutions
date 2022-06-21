class Solution {
public:
    vector<int> countBits(int n) {
            vector<int>answer;
        for(int i = 0 ; i <= n ; i++){
                bitset<32>p = i; // Converting the integer to binary
                answer.push_back(p.count()); // pushing back the number of ones  into vector
        }
            return answer; // returning the vector
    }
};