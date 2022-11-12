#include <iostream>
using namespace std;
int main()
{
    //variable declaration
    float area,Perimeter;
    int base,height,hypotenuse;

    //variable initialization
    base=10;
    height=7;
    hypotenuse=12;

    area= 0.5*base*height;
    Perimeter= base+height+hypotenuse;

//output
cout<<"area:"<<area<<endl;
cout<<"Perimeter:"<<Perimeter<<endl;
}