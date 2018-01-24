#include<iostream>
using namespace std;
class EMPLOYEE
{
    string name;
    int age;
    public:
    void getdata()
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;
    }
    void putdata()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    EMPLOYEE A[n];
    for(int i=0;i<n;i++)
    {
        A[i].getdata();
        A[i].putdata();
    }
    return 0;
}
