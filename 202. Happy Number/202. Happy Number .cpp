class Solution {
public:
    int get(int n)
    {
        int sum = 0; // Intialize to zero
        while(n>0) 
        {
            int digit =n % 10; // get the last digit
            n = n/10; // divide the number
            sum +=pow(digit,2); // sum of the squares of the last digit
        }
        return sum; // Return sum
    }
    bool isHappy(int n) {
        if(n==1) return true; // If the number is already 1 then return true
        unordered_set<int>check; // create a set
        check.insert(n); // Insert the intial value
        while(n!=1) 
        {
            n = get(n); // get the sum of the squares of the digit
            if(check.count(n)) break; // If the sum is present in the set then break the loop , this condition is there to check if there exsists a cycle of repeating whose sum will never be 1 
            else check.insert(n); // Insert 1 if not present
        }
        return n==1; // return true if n is 1 else 0
    }
};