class Solution {
public:
    vector<int> evenOddBit(int n) {
        bitset<32>b(n);
        int odd = 0 , even = 0;
        string a = b.to_string();
        for(int i = 0 ; i < a.size() ; i++){
            if(i%2!=0) if(a[i]=='1') odd++;
            if(i%2==0) if(a[i]=='1') even++;
        }
        return {odd,even};
            }
};
