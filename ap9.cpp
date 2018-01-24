#include<iostream>
using namespace std;
class Rect
{
    int l,b;
    public:
    void getdata();
    void area();
};
void Rect::getdata()
{
    cout<<"Enter length and breadth:";
    cin>>l>>b;
}
void Rect::area()
{
    getdata();
    cout<<l*b<<endl;
}

int main()
{
    Rect A;
    A.area();
    return 0;
}
