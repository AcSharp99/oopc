#include<iostream>
using namespace std;
int main()
{
    int a,sum=0,x;
    cout<<"Enter a no:";
    cin>>a;
    cout<<"The sum of digits of integer is:";
    while(a!=0)
    {
        x=a%10;
        sum+=x;
        a/=10;
    }
    cout<<sum;
    return 0;
}
