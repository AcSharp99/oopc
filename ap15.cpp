#include<iostream>
#include<string>
using namespace std;
class player
{
    int r,i,no;
    string name;
    float avg;
    public:
        void getdata()
        {
            cout<<"Enter player's name:";
            cin>>name;
            cout<<"Enter runs, innings and not outs:";
            cin>>r>>i>>no;
        }
        void display()
        {
            avg=r/(i-no);
            cout<<"Name:"<<name<<endl;
            cout<<"Runs:"<<r<<endl;
            cout<<"Innings:"<<i<<endl;
            cout<<"Not outs:"<<no<<endl;
            cout<<"Average:"<<avg<<endl;
        }
};

int main()
{
    int n;
    cin>>n;
    player p[n];
    for(int i=0;i<n;i++)
    {
        p[i].getdata();
        p[i].display();
    }
    return 0;
}
