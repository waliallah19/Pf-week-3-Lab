#include <iostream>
using namespace std;
main()
{
float charge;
float time;
float current;
cout<<"Enter charge in coulomb : ";
cin>>charge;
cout<<"Enter time in second: ";
cin>>time;
current=charge/time;
cout<<"Current is " <<current <<" coulomb per second.";
}