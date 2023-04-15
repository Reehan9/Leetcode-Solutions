class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
         long long int v = (long long)(length)*(long long)(width)*(long long)(height);
        if(length >= 10000 || width >=10000 || height >= 10000 ||  v >= pow(10,9)){
            if(mass>=100){
                return "Both";
            }
            return "Bulky";
        }
        if(mass>=100) return "Heavy";
        return "Neither";
    }
};
