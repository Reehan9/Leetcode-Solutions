class Solution {
public:
    string sortSentence(string s) {
        string result;
        vector<string>res(s.size()); // Creating a vector of larger size
        int counter = 0 /* pointers to keep track */, p = 1; // to intialize the vector
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]==' '){
                p++; // Counting the number of words
                counter = i+1;
            }
           if(isdigit(s[i])){ // Checking if it is a digit
                res[s[i]-'0'] = s.substr(counter , i-counter); // Including them in a vector
            }
        }
        res.resize(p+1); // Resizing the vector
    for(int i = 0 ; i < res.size() ; i++){ 
        if(i==0 || i==p) // the first and the last words do not contain any spaces
        result += res[i]; 
        else
            result+= res[i] +" ";
    }
        return result; // Return the String
    }
};
