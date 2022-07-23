class Solution {
public:
    int countEven(int num) {
        int count = 0;
        for(int i = 1 ; i <= num ; i++){
            if(check(i))
                count++;
        }
        return count;
    }
      bool check(int n){
          int sum = 0 ; 
          while(n!=0){
              int d = n%10;
              n = n/10;
              sum += d;
          }
         if(sum%2==0)
             return 1;
          return 0;
      }
};