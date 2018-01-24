#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"Enter 2 nos:";
  cin>>a>>b;
  cout<<"Enter width:";
  cin>>c;
  cout<<setw(c);//setw() is used to set the width before a field and icluded in iomanip library
  cout<<a<<endl;
  cout<<setw(c);
  cout<<b<<endl;
  return 0;
}
