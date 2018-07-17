#include<iostream>
using namespace std;
class D
{
    public:
    virtual void area()=0;
    virtual void display(){}

};
class R :public D {
    double len,br,res;
    public:
    R(double l,double b)
    {
        len=l;
        br=b;
    }
    void area()
    {
        res=len*br;
    }
    virtual void display()
    {
        cout<<"res r = "<<res<<endl;
    }
};
main()
{
    D *arr[3];
    int len,br,res;
    cout<<"enter len,be"<<endl;
    cin>>len;
    cin>>br;
    R ob(len,br);
    arr[0]=&ob;
    ob.area();
    ob.display();
    cout<<"using arr of pointer"<<endl;
    for(int i=0;i<1;i++){
        arr[i]->display();}
}
