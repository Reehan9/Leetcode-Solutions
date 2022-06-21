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
/*
Alternate solution to save space time complexity with few edits (Best Solution)
class Solution {
public:
    vector<int> countBits(int n) {
            vector<int>answer(n+1);
        for(int i = 0 ; i <= n ; i++){
                bitset<32>p = i;
                answer[i] = p.count();
        }
            return answer;
    }
};*/
