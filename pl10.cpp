#include<iostream>
using namespace std;
class ITEM
{
    public:
    void setdata()
    {
        int a=10,b=20;
    }
    void getdata()
    {
        int a,b;
        cin>>a>>b;
    }
    void putdata()
    {
        int a,b;
        cout<<a<<" "<<b;
    }
};
int main()
{
    ITEM obj;
    obj.setdata();
    obj.getdata();
    obj.putdata();
    return 0;
}
