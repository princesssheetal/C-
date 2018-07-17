#include<iostream>
using namespace std;
class Clock
{
    int hh,mm;
    public:
    ~Clock();
    Clock();
    Clock(int,int);
    void show();
    Clock sum(Clock);
};
Clock ::~Clock()
{

}
Clock ::Clock()
{
    hh=mm=0;
}
Clock ::Clock(int h,int m)
{
    hh=h;
    mm=m;
}
void Clock :: show()
{
    cout<<hh<<":"<<mm<<endl;
}
Clock Clock ::sum(Clock t)
{
    Clock c3;
    c3.hh=hh+t.hh;
    c3.mm=mm+t.mm;
    if(c3.mm>59)
    {
        c3.hh++;
        c3.mm-=60;
    }
    return c3;
}
main()
{
    int xx,yy;
    cout<<"enter first time"<<endl;
    cin>>xx>>yy;
    Clock c1(xx,yy),c3;
    c1.show();
    cout<<"enter second  time"<<endl;
    cin>>xx>>yy;
    Clock c2(xx,yy);
    c2.show();
    c3=c1.sum(c2);
    cout<<"sum =";
    c3.show();
}
