#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n,a,i;
    cout<<"\n enter the num";
    cin>>n;
    a=fact(n);
    for(i=1;i<=n;i++)
    cout<<"\n factorial of  "<<i<<" is "<<fact(i);
    return 0;
}
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return(n*fact(n-1));
}
