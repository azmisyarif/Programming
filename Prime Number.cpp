#include <iostream>
using namespace std;

int main()
{
  int n, i;
  bool Prime = true;
  cout << "Input positive integer: ";
  cin >> n;
  for (i = 2; i <= n / 2; ++i)
  {   if(n % i == 0)
      {   Prime = false;
          break;           
	  }
  }
  if (Prime)
      cout << "You got a prime number";
  else
      cout << "You aint got a prime number";

  return 0;
}
