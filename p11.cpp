#include<iostream>
using namespace std;
class LN
{
    int a,b;
    public:
    void getdata()
    {   cout<<"Enter two numbers:";
        cin>>a>>b;
    }
    void largest()
    {
        getdata();
        a>b?cout<<a:cout<<b;
    }
};
int main()
{
    LN A;
    A.largest();
    return 0;
}
