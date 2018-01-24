#include<iostream>
using namespace std;
class energy
{
    string name;
    int units;
    float charge;
    public:
        void getdata()
        {
            cout<<"Enter name:";
            cin>>name;
            cout<<"Units consumed:";
            cin>>units;
        }
        void display()
        {
            if(units<=100)charge=(0.60*units);
            if(units >100 && units<=300)charge=(0.80*units);
            if(units > 300)charge=(0.90*units);
            if(charge>300)charge*=1.15;
            cout<<"Name: "<<name<<endl;
            cout<<"Units: "<<units<<endl;
            cout<<"Bill: Rs."<<charge+50<<endl;
        }
};

int main()
{
    energy a;
    a.getdata();
    a.display();
    return 0;
}
