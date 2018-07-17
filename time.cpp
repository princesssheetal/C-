#include<iostream>
using namespace std;
class Clock
{
    int hh,mm;
    public:
    Clock();
    Clock(int,int);
    void show();
    Clock sum(Clock);
};
Clock ::Clock()
{
    hh=mm=0;
}
Clock :: Clock(int h,int m)
{
    hh=h;
    mm=m;
}
void Clock :: show()
{
    cout<<hh<<" : "<<mm<<"\n";
}
Clock Clock :: sum(Clock t2)
{
     Clock c3;
     c3.hh=hh+t2.hh;
     c3.mm=mm+t2.mm;
     if(c3.mm>69)
     {
        c3.hh++;
        c3.mm-=60;
    }
    return c3;
}
main()
{
    Clock c1(h,m),c2(h,m),c3;
    c1.show();
    c2.show();
    c3=c1.sum(c2);
    c3.show();
}
