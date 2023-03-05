class Solution {
public:
    int countDigits(int num) {
        string check = to_string(num);
        int counter = 0;
        for(auto p : check){
          if(num%(int(p)-int('0'))==0)
             counter++;
        }
      return counter;
    }
};
