class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int , float>c;
                for(int i = 0 ; i < arr.size() ; i++){
                        c[arr[i]]++;
                }
            for(auto p : c)
                    if(p.second/arr.size()>0.25)
                            return p.first;
            return 0;
    }
};