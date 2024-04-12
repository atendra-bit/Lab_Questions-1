// Create a class Triangle. Include overloaded functions for calculating the area of a
// triangle.

// Code :

#include <iostream>
using namespace std;
class triangle
{
    private:
    float _height = 0;
    float _base = 0;
    public:
    void setdimensions(int height,int base)
    {
        _height = (float)height;
        _base = (float)base;
    }
    
    void setdimensions(double height,double base)
    {
        _height = (float)height;
        _base = (float)base;
    }
    
    void setdimensions(char height,char base)
    {
        _height = height - '0';
        _base = base - '0';
    }

    float getarea()
    {
        return (_base*_height)/2;
    }
};

int main()
{
    triangle tri;
    int h = 50;
    int b = 27;
    tri.setdimensions(h,b);
    
    cout << "area with int veriables :- " << tri.getarea() << endl;
    
    double ht = 89.07;
    double be = 27.25;
    
    tri.setdimensions(ht,be);
    
    cout << "area with double veriables :- " << tri.getarea() << endl;
    tri.setdimensions('4','8');
    
    cout << "area with char veriables :- " << tri.getarea() << endl;
    
}