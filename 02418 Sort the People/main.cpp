class Solution {
public:

struct People {
    string name;
    int height ;
};

static bool compare(People p1 , People p2 ){
    return p1.height>p2.height;
}
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
            vector<People>order(names.size());
            for(int i = 0 ; i < names.size() ; i++){
                order[i].name = names[i];
                order[i].height = heights[i];
            }
            sort(order.begin() ,order.end() , compare );
            for(int i = 0 ; i < order.size() ; i++){
                   names[i] =  order[i].name;
            }
            return names;
    }
};
