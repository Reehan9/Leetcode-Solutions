class Solution
{
public:
  bool isPalindrome (int x)
  {
    if (x < 0)
      return false;
    long long int same = x;
    long long int rnumber = 0;
    long long int digit;
    while (x != 0)
      {
	digit = x % 10;
	rnumber = rnumber * 10 + digit;
	x = x / 10;
      }
    if (rnumber == same)
      return true;
    else
      return false;
  }
};
