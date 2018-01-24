#include<iostream>
using namespace std;
int area(int l, int b=10)
{
    return(l*b);
}

int area1(int l, const int b1)
{
    return(l*b1);
}

int main()
{
    int l;
    const int b=10;
    cout<<"Enter length of a rectangle whose area is to be found with breadth=10:";
    cin>>l;
    cout<<"Area with default arguement="<<area(l)<<endl;
    cout<<"Area with constant arguement="<<area1(l,b);
    return 0;
}
