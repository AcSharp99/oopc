#include<iostream>
using namespace std;
class abc;
class def
{
    int a;
    public:
        void getdata()
        {
            cout<<"Enter no:";
            cin>>a;
        }
        void putdata()
        {
            cout<<a<<endl;
        }
        friend void swap(abc *a, def *b);
};
class abc
{
    int a;
    public:
        void getdata()
        {
            cout<<"Enter no:";
            cin>>a;
        }
        void putdata()
        {
            cout<<a<<endl;
        }
        friend void swap(abc *a, def *b);
};
void swap(abc *a, def *b)
{
    int temp;
    temp=(*a).a;
    (*a).a=(*b).a;
    (*b).a=temp;
}

int main()
{
    abc a;
    def b;
    a.getdata();
    b.getdata();
    swap(&a,&b);
    a.putdata();
    b.putdata();
    return 0;
}
