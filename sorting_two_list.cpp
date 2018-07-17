#include<iostream>
#include<list>
#include<cstdlib>
using namespace std;
int main()
{
    list<int> l1,l2;
    int temp;
    cout<<"enter 5 no"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>temp;
        l1.push_back(temp);

    }
    cout<<"enter 5 no"<<endl;
     for(int i=0;i<5;i++)
    {
        cin>>temp;
        l2.push_back(temp);

    }
    list<int> ::iterator itr=l1.begin();
    cout<<"list 1"<<endl;
    while(itr!=l1.end())
    {
        cout<<*(itr++)<<endl;
    }
    cout<<"list 2"<<endl;
    itr=l2.begin();
    while(itr!=l2.end())
    {
        cout<<*(itr++)<<endl;
    }
    l1.sort();
    cout<<"srt list1"<<endl;
    itr=l1.begin();
    while(itr!=l1.end())
    {
        cout<<*(itr++)<<endl;
    }
     l2.sort();
    cout<<"srt list2"<<endl;
    itr=l2.begin();
    while(itr!=l2.end())
    {
        cout<<*(itr++)<<endl;
    }
    l1.merge(l2);
    cout<<"sorted list"<<endl;
    itr=l1.begin();
    while(itr!=l1.end())
    {
        cout<<*(itr++)<<endl;
    }
}
