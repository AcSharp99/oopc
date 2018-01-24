#include<iostream>
using namespace std;
class count
{
    int a;
    static int c;
    public:
    void getdata()
    {   cout<<"Enter a:";
        cin>>a;
        c++;
    }
    static void print()
    {
        cout<<"c:"<<c<<endl;
    }
    void p()
    {
        cout<<"a:"<<a<<endl;
    }
};
int count::c;
int main()
{
    count A,B;
    A.getdata();
    A.print();
    A.p();
    B.getdata();
    B.print();
    B.p();
    return 0;
}
