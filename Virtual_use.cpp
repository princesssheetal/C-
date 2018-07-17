#include<iostream>
using namespace std;
class D
{
    public:
    virtual void area()=0;
    virtual void display()=0;
};
class R :public D
{
    double le,br,res;
    public:
    R(double l,double b)
    {
        le=l;
        br=b;
    }
    void area()
    {
        res=le*br;
    }
    void display()
    {
        cout<<"area of rect = "<<res<<endl;
    }
};
class T :public D
{
    double bs,ht,res;
    public:
    T(double b,double h)
    {
        bs=b;
        ht=h;
    }
    void area()
    {
        res=0.5*bs*ht;
    }
    void display()
    {
        cout<<"area of tri = "<<res<<endl;
    }
};
class C :public D
{
    double ra,res;
    public:
    C(double r)
    {
        ra=r;
    }
    void area()
    {
        res=3.14*ra*ra;
    }
    void display()
    {
        cout<<"area of cir = "<<res<<endl;
    }
};
main()
{
    D *arr[3];
    int len,br,bae,ht,rad;
    cout<<"enter len br"<<endl;
    cin>>len>>br;
    R obj(len,br);
    arr[0]=&obj;
    cout<<"enter base ht"<<endl;
    cin>>bae>>ht;
    T obj1(bae,ht);
    arr[1]=&obj1;
    cout<<"enter rad"<<endl;
    cin>>rad;
    C obj2(rad);
    arr[2]=&obj2;
    obj.area();
    obj.display();
        obj1.area();
    obj1.display();
        obj2.area();
    obj2.display();
    cout<<"op using arr of pointer"<<endl;
    for(int i=0;i<3;i++)
    {
        arr[i]->display();
    }
}
