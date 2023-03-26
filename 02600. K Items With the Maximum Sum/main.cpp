class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        if(k==0) return 0;
        int ans = 0;
        while(numOnes!=0){
            numOnes--;
            ans++;
            k--;
            if(k==0) return ans;
        }
     while(numZeros!=0){
         numZeros--;
            k--;
            if(k==0) return ans;
        }
         while(numNegOnes!=0){
            ans--;
              numNegOnes--;
            k--;
            if(k==0) return ans;
        }
        return ans;
    }
};
