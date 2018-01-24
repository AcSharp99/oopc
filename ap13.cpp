#include<iostream>
using namespace std;
class dist
{
    int feet;
    float inches;
    public:
    void setdist()
    {
        feet=inches=0;
    }
    void getdist()
    {
        cout<<"Enter feet and inches:";
        cin>>feet>>inches;
    }
    void display()
    {
        cout<<feet<<"'"<<inches<<"\""<<endl;
    }
    void add(dist d1,dist d2)
    {
        //dist d3;
        feet=d1.feet+d2.feet;
        inches=d1.inches+d2.inches;
        if(inches>12.0)
        {
            int f;
            f=(int)(inches)/12;
            feet+=f;
            inches=(int)(inches)%12;
        }
    }
    dist add1(dist d2)
    {
		dist d1,d3;
		d3.feet=d1.feet+d2.feet;
        d3.inches=d1.inches+d2.inches;
        if(d3.inches>12.0)
        {
            int f;
            f=(int)(d3.inches)/12;
            feet+=f;
            d3.inches=(int)(d3.inches)%12;
        }
        return d3;
	}
};

int main()
{
    dist D1,D2,D3,D4;
    D1.setdist();
    D1.getdist();
    D1.display();
    D2.setdist();
    D2.getdist();
    D2.display();
    D3.add(D1,D2);
    D3.display();
    D4=D1.add1(d2);
    D4.display();
    return 0;
}
