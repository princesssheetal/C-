#include<iostream>
#include<cmath>
using namespace std;
class Point
{
    int xx,yy;
    public:
    ~Point();
    Point();
    Point(double,double);
    void show();
    void show1();
    void show3(double);
    double sum(Point);
};
Point ::~Point()
{

}
Point ::Point()
{
    xx=yy=0;
}
Point ::Point(double h,double m)
{
    xx=h;
    yy=m;
}
void Point:: show()
{
    cout<<"value of x1 = "<<xx<<"value of y1 = "<<yy<<endl;
}
void Point:: show1()
{
    cout<<"value of x2 = "<<xx<<"value of y2 = "<<yy<<endl;
}
void Point ::show3(double res )
{
    cout<<"dist betwm two points = "<<res<<endl;
}
double Point ::sum(Point t)
{
    Point c3;
    c3.xx=pow((t.xx-xx),2);
    c3.yy=pow((t.yy-yy),2);
    return (sqrt(c3.xx+c3.yy));
}
main()
{
    int xx,yy;
    cout<<"enter first value"<<endl;
    cin>>xx>>yy;
    Point c1(xx,yy),c3;
    c1.show();
    cout<<"enter second  value"<<endl;
    cin>>xx>>yy;
    Point c2(xx,yy);
    c2.show1();
    double res=c1.sum(c2);

    c3.show3(res);
}
