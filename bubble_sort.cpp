#include<iostream>
using namespace std;
template <class T>
void bub_sort(T a[],int size)
{
    for(int i=0;i<size-1;i++)
    {

            for(int j=0;j<size-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    T temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }

}
template <class TY>
void display(TY a[],int size)
{
    for(int i=0;i<size;i++)
    cout<<a[i]<<" "<<endl;
}
main()
{
    int a[20],n,i;
    cout<<"size"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"bf sorting"<<endl;
    display(a,n);
    bub_sort(a,n);
    cout<<"af sorting"<<endl;
    display(a,n);

    double ad[20];
    cout<<"size"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>ad[i];
    }
     cout<<"bf sorting"<<endl;
    display(ad,n);
    bub_sort(ad,n);
    cout<<"af sorting"<<endl;
    display(ad,n);

     float af[20];
    cout<<"size"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>af[i];
    }
     cout<<"bf sorting"<<endl;
    display(af,n);
    bub_sort(af,n);
    cout<<"af sorting"<<endl;
    display(af,n);
}
