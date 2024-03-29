class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
    unordered_map<char, pair<int, int>> check;
       for (char c = 'a'; c <= 'z'; ++c) 
           check[c] = make_pair(-1, -1);
        for(int i = 0 ; i < s.size() ; i++){
            if(check[s[i]].first==-1){
            check[s[i]].first = i;
        }
            else if(check[s[i]].second==-1){
            check[s[i]].second = i;
        }
    }
        for(auto p : check) {
            if(distance[p.first-'a']!=p.second.second-p.second.first-1 && p.second.first!=-1) 
                    return false;
        } 
        return true;
        }
};
