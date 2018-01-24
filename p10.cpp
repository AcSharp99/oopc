#include<iostream>
using namespace std;
class ITEM
{
    public:
    int number;
    float cost;
    void getdata()
    {   cout<<"Enter number and cost:";
        cin>>number>>cost;
    }
    void putdata()
    {
        cout<<"Number:"<<number<<endl;
        cout<<"Cost:"<<cost<<endl;
    }
    void setdata()
    {
        number=0;cost=0;
    }
};

int main()
{
    ITEM a;
    a.setdata();
    a.getdata();
    a.putdata();
    return 0;
}
