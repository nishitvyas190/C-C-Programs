#include<string.h>
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
void fixpay(float pay[],int n)
{
    int i;
    //float bill;
    for(i=0;i<n;i++)
    {
    if(pay[i]<100000)
        {pay[i]=pay[i]+(0.25*pay[i]);
        cout<<pay[i]<<endl;}
    else if(pay[i]>100000 && pay[i]<200000)
        {pay[i]=1.2*pay[i];
        cout<<pay[i]<<"\n";}
    else
        {
            pay[i]=1.15*pay[i];
            cout<<pay[i]<<"\n";
        }
}
}
int main()
{
    int n;
    float pay[10],bill;

    cout<<"ENTER Size of Array:\n"; cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"ENter the number:\n";
        cin>>pay[i];

    }

    fixpay(pay,n);

    return(0);
}
