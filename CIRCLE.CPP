#include<iostream.h>
class Circle
{
private:
int radius;
public:
Circle () : radius(4) {}
void getRadius()
{
cout<<"enter value of radius";
cin>>radius;
}
void showRadius()
{
cout<<"/nvalue of radius"<<radius;
}
int area()
{
int area= 3.14 * radius * radius;
return area;
}
};
int main()
{
Circle c1;
c1.getRadius();
c1.showRadius();
cout<<"c1="<<c1.area();
return 0;
}