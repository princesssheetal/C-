#include<iostream>
using namespace std;
class Dollar
{
    double d;
    public:
    Dollar();
    Dollar(double dd);
    void show(double);
    ~Dollar();
    double convert(double d);
};
Dollar :: ~Dollar()
{
}
Dollar :: Dollar()
{
    d=0;
}
Dollar :: Dollar(double dd)
{
    d=dd;
}
double Dollar :: convert(double d)
{
    double c3 ;
    c3=(60.0*d);
    return c3;
}
void Dollar :: show(double r)
{
    cout<<d <<"dollar  in rupee is = "<<r<<"\n";
}

class Rupee
{
    double R;
    public:
    Rupee();
    Rupee(double rr);
    void show1(double);
    ~Rupee();
    double convertt(double R);
};
Rupee :: ~Rupee()
{
}
Rupee :: Rupee()
{
    R=0;
}
Rupee :: Rupee(double dd)
{
    R=dd;
}
double Rupee :: convertt(double R)
{
    double c4 ;
    c4=(R/60);
    return c4;
}
void Rupee :: show1(double a)
{
    cout<<R <<"dollar  in rupee is = "<<a<<"\n";
}
main()
{
    double r,a;
    Dollar d1(6);
    Rupee d2(60);
    r=d1.convert(6);
    d1.show(r);
    a=d2.convertt(60);
    d2.show1(a);

}
