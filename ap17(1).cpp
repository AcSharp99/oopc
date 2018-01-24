#include<iostream>
using namespace std;
class array
{
    int n,i,s,*a;
    public:
        array(int size)
        {   n=size;
            a=new int[n];
        }
        void getdata()
        {
            cin>>s;
            for(i=0;i<n;i++)
            {
                cin>>a[i];
                a[i]*=s;
            }
        }
        void display()
        {
            for(i=0;i<n;i++){
            cout<<a[i]<<" ";}
        }
};

int main()
{
    array a(5);
    a.getdata();
    a.display();
    return 0;
}
