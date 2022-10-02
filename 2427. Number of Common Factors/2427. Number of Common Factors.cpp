class Solution {
public:
    int commonFactors(int a, int b) {
        int c = min(a,b);
        int d = max(a,b);
        int counter = 0;
        for(int i = 1 ; i <= c ; i++){
            if((c%i==0 && d%i==0))
              counter++;
        }
        return counter;
    }
};