class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>answer;
        unordered_map<int , int>check;
            for(int i = 0 ; i < arr.size() ; i++){
                    check[arr[i]]++;
            }
            for(auto p : check)
                answer.push_back(p.second);
            for(int i = 0 ; i < answer.size() ; i++){
                    if(count(answer.begin(),answer.end() , answer[i])>=2)
                    return false;
            }
            return true;
    }
};
