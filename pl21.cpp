#include<iostream>
using namespace std;
class rational
{
    public:
        int a,b,c,d,e,f;
        void getdata()
        {
            cin>>a>>b;
        }
        rational()
        {
             c=a+b;
             d=a-b;
             e=a*b;
             f=a/b;
        }
};

int main()
{
    rational A;
    A.getdata();
    cout<<"Addition="<<A.c<<endl;
    cout<<"Subtraction="<<A.d<<endl;
    cout<<"Multiplication="<<A.e<<endl;
    cout<<"Division="<<A.f<<endl;
    return 0;
}
