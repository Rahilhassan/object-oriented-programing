#include<iostream.h>
#include<conio.h>
class distance
{
private:
float mtf;
int feet;
float inches;
public:
distance(): feet(0),inches(0.0),mtf(3.280833f){}
distance(float meter):mtf(3.280833f)
{
float fltfeet=meter*mtf;
feet=int(fltfeet);
inches=12*(fltfeet-feet);
}
void getdist()
{
cout<<"enter inches";
cin>>inches;
cout<<"enter feet";
cin>>feet;
}
void showdist()
{
cout<<"/"<<inches<<"/"<<feet;
}
operator float()
{
float fracfeet=inches/12;
fracfeet=float(feet);
return fracfeet/mtf;
}
};
int main()
{
float meter;
getch();
clrscr();
distance dist=2.35f;
cout<<"/ndist1=";
dist.showdist();
dist.getdist();
meter=float(dist);
cout<<"/ndist1="<<meter<<"meter";
return 0;
}

