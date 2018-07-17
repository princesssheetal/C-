#include<iostream>
using namespace std;
template <typename T>
class C//gen class
{
    T rad,res;//gen member
    public:
    C(T);
    void area();
    void show();
};
template<typename T>//dec
C <T> ::C(T rad)
{
    this->rad=rad;
}
template<typename T>
void C<T> ::area()
{
    res=3.14*rad*rad;
}
template<typename T>
void C<T> :: show()
{
    cout<<"area = "<<res<<endl;
}
main()
{
    int x;
    cout<<"enter rad"<<endl;
    cin>>x;
    C<int>obj(x);
   // obj.area();
   // obj.show();
     double y;
    cout<<"enter rad"<<endl;
    cin>>y;
    C<double>obj1(y);
   // obj1.show();
    float z;
    cout<<"enter rad"<<endl;
    cin>>z;
    cout<<"rad="<<z<<endl;
    C<float>obj2(z);

     obj.area();
    obj.show();
     obj1.area();
    obj1.show();
    obj2.area();
    obj2.show();
}
