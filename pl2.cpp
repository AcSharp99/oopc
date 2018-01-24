#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,ch;
    cout<<"Enter 2 nos";
    cin>>a>>b;
    cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
    cin>>ch;
    if(ch==1)
    {
        c=a+b;
        cout<<c<<endl;
    }
    if(ch==2)
    {
        c=a-b;
        cout<<c<<endl;
    }
    if(ch==3)
    {
        c=a*b;
        cout<<c<<endl;
    }
    if(ch==4)
    {
        c=a/b;
        cout<<c<<endl;
    }
 return 0;
}
