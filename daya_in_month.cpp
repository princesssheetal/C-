#include<iostream>
using namespace std;
void month()
{
int i;
char mm[][12]={"J","F","M","A","M","J","JU","AU","S","O","N","D"};
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
for(i=0;i<12;i++)
    {
            cout<<mm[i]<<" has "<<days[i]<<" days"<<endl;
    }
}
main()
{
month();
}
