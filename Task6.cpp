#include <iostream>
using namespace std;
main()
{
string name;
float ecat;
float inter;
float matric;
float ag;
float a;
float b;
float c;
float x;
float y;
float z;
cout<<"Enter your name: ";
cin>>name;
cout<<"Enter your marks in matriculation(out of 1100): ";
cin>>matric;
cout<<"Enter your marks in intermediate part-1(out of 550):  ";
cin>>inter;
cout<<"Enter your E-cat marks(out of 400): ";
cin>>ecat;
a=(matric/1100)*100;
b=(inter/550)*100;
c=(ecat/400)*100;
x=(10*a/100);
y=(40*b/100);
z=(50*c/100);
ag=x+y+z;
cout<<"Total aggregate of "<<name <<" is " <<ag <<"%."; 
}