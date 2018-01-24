#include<iostream>
using namespace std;
class c
{
    int a,b;
    public:
        c(int a1, int b1)
        {
            a=a1;
            b=b1;
        }
        void putdata()
        {
            cout<<a<<" "<<b<<endl;
        }
};

int main()
{
    c c1(10,15);
    c c2=c1;
    c1.putdata();
    c2.putdata();
    return 0;
}
