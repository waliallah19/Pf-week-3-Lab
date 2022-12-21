#include <iostream>
using namespace std;
main()
{
double bits;
double b;
double kb;
double mb;
cout <<"Enter number of bits: "<<endl;
cin>>bits;
b=bits/8;
cout <<bits <<" bits are equal to " <<b <<" bytes."<<endl;
kb=b/1024;
cout <<bits <<" bits are equal to " <<kb <<" kilobytes."<<endl;
mb=kb/1024;
cout <<bits <<" bits are equal to " <<mb <<" megabytes."<<endl;

}