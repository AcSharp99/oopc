#include<iostream>
using namespace std;
class overload
{
    int a,b;
    public:
        int c;
        void getdata()
        {
            cout<<"Enter a and b:";
            cin>>a>>b;
        }
        overload()
        {
            getdata();
            c=a+b;
        }
        overload(int a1,int b1)
        {
            a=a1;
            b=b1;
            c=a+b;
        }
};

int main()
{
    overload A;
    cout<<A.c<<endl;
    overload B(10,15);
    cout<<B.c<<endl;
    return 0;
}
