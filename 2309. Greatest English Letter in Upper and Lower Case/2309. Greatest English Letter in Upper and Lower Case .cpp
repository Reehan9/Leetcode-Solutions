class Solution {
public:
    string greatestLetter(string s) {
        vector<int>ret; // Creating a vector
        string res; // Storing the result
        for(int i = 0  ; i < s.size() ; i++){
            if(s[i]>=97 && s[i]<=122){ // Checking lowercase alphabets
            auto pt = s.find(s[i]-32); // Manipulating the ASCII values to check if uppercase is present
                if(pt!= string::npos) // If true
                    ret.push_back(s[i]-32); // Pushback
            }
        }
        if(ret.empty()) // If the vector is empty
            return ""; // Return NULL
        res = *max_element(ret.begin() , ret.end()); // store the maximum ascii value in the string
        return res; // Return the string
                
        }

};