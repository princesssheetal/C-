#include<iostream>
using namespace std;
class A{
    int val;
    public:
        A();
        A(int);
    void show();
    A operator+(A);
     A operator-(A);
    A operator++();
    A operator++(int);
    A operator+(int );
   friend A operator+(int ,A &);
   friend A operator--(A &);
};
A ::A()
{
    val=0;
}
A ::A(int v)
{
    val=v;
}
A A::operator+(A t)
{
    val=val+t.val;
    return *this;
}
A A::operator-(A t)
{
    val=val-t.val;
    return *this;
}
A A::operator++()
{
    val++;
    return *this;
}
A A::operator++(int x)
{
    val++;
    return *this;
}
A A::operator+(int x)
{
    val=val+x;
    return *this;
}
A operator--(A &t)
{
    t.val--;
    return t;
}
A operator+(int x,A &t)
{
    t.val=t.val+x;
    return t;
}
void A::show()
{
    cout<<"value = "<<val<<endl;
}
main()
{
    A ob(10),ob1(20),ob3;
    ob.show();
    ++ob;
    ob.show();
    ob1.show();
    ob3=ob+ob1;
    ob3.show();
     ob3=ob-ob1;
    ob3.show();
    ob3++;
    ob3.show();
    ob3=ob3+30;
    ob3.show();
 ob3=300+ob3;
    ob3.show();
    ++ob3;
    ob3.show();
    ob3++;
    ob3.show();
    --ob3;
     ob3.show();
}


