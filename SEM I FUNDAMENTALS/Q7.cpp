// Create a template class TwoDim which contains x and y coordinates. Define
// default constructor, parameterized constructor and void print() function to print the
// coordinates. Now reuse this class in ThreeDim adding a new dimension as z. Define the
// constructors and void print() in the subclass. Implement main() to show runtime
// polymorphism.

// Code :

#include <iostream>
using namespace std;
class TwoDim{
float x;
float y;
public:
TwoDim()
:x(0.0),y(0.0)
{
cout << "(default TwoDim Constructor Called)" << endl;
}
TwoDim(float _X, float _Y)
:x(_X),y(_Y){
cout << "(parameterized TwoDim Constructor Called)" << endl;
}
void print()
{
cout << "X cooridnate :- " << x << endl;
cout << "Y cooridnate :- " << y << endl;
cout << "(x & y coordinate printed)" << endl;
}
};
class ThreeDim{
float z;
TwoDim* todim;
public:
ThreeDim()
:z(0.0)
{
cout << "(default ThreeDim Constructor Called)" << endl;
todim = new TwoDim();
}
ThreeDim(float _Z)
:z(_Z)
{
cout << "(parameterized ThreeDim Constructor Called with z value only)" <<
endl;
todim = new TwoDim();
}
ThreeDim(float _Z,float _X, float _Y)
:z(_Z)
{
cout << "(parameterized ThreeDim Constructor Called with x,y,z values)" <<
endl;
todim = new TwoDim(_X,_Y);
}
void print()
{
todim->print();
cout << "Z cooridnate :- " << z << endl;
cout << "(z coordinate printed)" << endl;
}};
int main()
{
ThreeDim empty;
empty.print();
cout << " -------- " << endl;
ThreeDim zfill(60.90);
zfill.print();
cout << " -------- " << endl;
ThreeDim fill(60.90,55.45,90.34);
fill.print();
}