#include<iostream>
using namespace std;
class acc
{
    string name,a_type;
    int a_no;
    float balance;
    public:
    void setval()
    {
        name="Null";
        a_type="Null";
        a_no=0;
        balance=0.0;
    }
    void deposit()
    {
        int a;
        cout<<"Enter amount to be deposited:";
        cin>>a;
        balance+=a;
    }
    void getdata()
    {
        //int c;
        cout<<"Enter name and account type:";
        cin>>name>>a_type>>a_no>>balance;
    }
    void withdraw()
    {
        float c;
        cout<<"Enter amount to be withdrawn:";
        cin>>c;
        //cout<<"Balance:"<<balance<<endl;
        balance-=c;
        if(balance<1000)
        cout<<"Can't withdraw"<<endl;
        else cout<<balance<<endl;
    }
    void putdata()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Balance:"<<balance<<endl;
    }
};

int main()
{
    int i;
    acc A[10];
    for(i=0;i<10;i++)
    {
        A[i].setval();
        A[i].getdata();
        A[i].deposit();
        A[i].putdata();
        A[i].withdraw();
        A[i].putdata();
    }
    return 0;
}
