#include<iostream>
using namespace std;
class def;
class abc
{
    int a;
    public:
        void getdata()
        {
            cout<<"Enter no:";
            cin>>a;
        }
        friend void max(abc x,def y);
};
class def
{
    int a;
    public:
        void getdata()
        {
            cout<<"Enter no:";
            cin>>a;
        }
        friend void max(abc x, def y);
};
void max(abc x, def y)
{
    int d;
    d=(x.a>y.a)?x.a:y.a;
    cout<<d;
}
int main()
{
    abc a;
    def b;
    a.getdata();
    b.getdata();
    max(a,b);
    return 0;
}
