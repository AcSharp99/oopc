#include<iostream>
using namespace std;
inline int mul(int a, int b)
{
    return (a*b);
}
inline int div(int a, int b)
{

    return (a/b);
}
int main()
{
    int a,b;
    cout<<"Enter 2 nos:";
    cin>>a>>b;
    cout<<"Multiplication:"<<mul(a,b)<<endl;
    cout<<"Division:"<<div(a,b);
    return 0;
}
