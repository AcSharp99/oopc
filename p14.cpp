#include<iostream>
using namespace std;
class TIME
{
    public:
    int a,b;
    void setdata()
    {
        int a=0,b=0;
    }
    void getdata()
    {
       cin>>a>>b;
    }
    void putdata()
    {
       // int a,b;
        cout<<a<<":"<<b;
    }
    TIME add(TIME t2)
    {
        TIME t3,t1;
        t3.a=a+t2.a;
        t3.b=b+t2.b;
        return(t3);
    }
};
int main()
{
    TIME t1,t2,t3;
    //t1.setdata();
    t1.getdata();
    //t1.putdata();
    t2.getdata();
    //t2.putdata();
    //t3.setdata();
    t3=t1.add(t2);
    t3.putdata();
    return 0;
}

