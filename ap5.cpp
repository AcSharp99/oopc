#include<iostream>
using namespace std;
enum days{mon,tue,wed,thu,fri,sat,sun};
int main()
{
    days today=tue;
    days tom=days(today+1);
    cout<<today<<" "<<tom<<endl;
    return 0;
}
