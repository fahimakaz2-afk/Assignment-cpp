#include<iostream>
#include<cmath>
using namespace std;

class Rectangle
{
    float length,breadth;
    public:
    // constructor
    Rectangle(float l, float b)
    {
        length=l;
        breadth=b;
    }

    float AreaRec()
    {
      return length*breadth;
    }

    float PeriRec()
    {
        return 2*(length+breadth);
    }
};

class Triangle
{
    //a,b,c are respective lengths triangle.
    float a,b,c; 

    public:
    Triangle(float x, float y, float z)
    {
        a=x;
        b=y;
        c=z;
    }
    float AreaTri()
    {
        // s is semi-perimeter.
        float s,area;
        s=(a+b+c)/2;
        area = sqrt( s*(s-a)*(s-b)*(s-c));
        return area;
    }

    float PeriTri()
    {
        return (a+b+c);

    }

};

int main()
{
    float x,y,z,l,b;
    cout<<"Enter the length of rectangle: ";
    cin>>l;
    cout<<"Enter the breadth of rectangle: ";
    cin>>b;
    Rectangle r1(l,b);
    cout<<"\nEnter the three sides of triangle:"<<endl;
    cin>>x>>y>>z;
    Triangle t1(x,y,z);
    cout<<" RECTANGLE:\n The Area is: "<< r1.AreaRec() << " the perimeter is:" << r1.PeriRec() << endl;
    cout<<" Triangle:\n The Area is: "<< t1.AreaTri() << " the perimeter is: " << t1.PeriTri()<<endl;
    return 0;

}