#include<string.h>
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
void DIVT(int no)
{
    if(no%13==0)
        cout<<"DIVISIBLE";
        else
        cout<<"0";

}
int main()
{
    int no;
    cout<<"ENTER A NUMBER:\n";
    cin>>no;
    DIVT(no);
    return(0);
}
