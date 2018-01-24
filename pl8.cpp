#include<iostream>
using namespace std;
int vol(int a)
{
    return(a*a);
}
int vol(int h, int r)
{
    return(3.14*r*r*h);
}
int vol(int l, int b, int h)
{
    return(l*b*h);
}
int main()
{
    int a,l,b,h,r;
    cout<<"Enter side:";
    cin>>a;
    cout<<"Enter length:";
    cin>>l;
    cout<<"Enter breadth:";
    cin>>b;
    cout<<"Enter height:";
    cin>>h;
    cout<<"Enter radius:";
    cin>>r;
    cout<<"Volume of cube:";
    cout<<vol(a);
    cout<<endl;
    cout<<"Volume of cylinder:";
    cout<<vol(h,r);
    cout<<endl;
    cout<<"Volume of rectangular box:";
    cout<<vol(l,b,h);
    cout<<endl;
    return 0;
}
