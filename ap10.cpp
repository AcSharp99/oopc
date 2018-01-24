#include<iostream>
using namespace std;
class array
{
    int a;
    public:
    void getdata();
    void putdata();
};
void array::getdata()
{
    cin>>a;
}
void array::putdata()
{
    cout<<a<<endl;
}

int main()
{
    int n;
    cin>>n;
    array A[n];
    for(int i=0;i<n;i++)
    {
        A[i].getdata();
        A[i].putdata();
    }
    return 0;
}
