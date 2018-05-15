#include <iostream>
using namespace std;

bool is_prime(int n)
{
     int i,count=0;
     if(n==1)
      return false;
	 if(n==2)
      return true;
     if(n%2==0)
      return false;
     for(i=1;i<=n;i++)
      if(n%i==0) count++;
      if(count==2) // Why ? 
       return true;
      else
       return false; 
}
