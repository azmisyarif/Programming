#include <iostream>
 
using namespace std;
 
int main()
{
    int i,no;
    cout<<"Enter any num: ";
    cin>>no;
    if(no==1)
    {
        cout<<"Smallest prime num is 2";
    }
    for(i=2;i<no;i++)
    {
        if(no%i==0)
        {
            cout<<"Not prime number";
            break;
        }
    }
    if(no==i)
    {
        cout<<"Yes, Number is Prime";
    }
    return 0;
}
