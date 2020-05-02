#include<string.h>
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class CONTEST
{
private:
    int eno;
    char des[30];
    int sco;
    char q;
public:
    CONTEST()
    {
        eno=11;
        strcpy(des,"School level");
        sco=100;
        //strcpy(q,"N");
        //cout<<bill;
    }
    void input()
    {
        cout<<"Enter the event number:\n"; cin>>eno;
        cout<<"Enter the description:\n"; cin.ignore(); cin.getline(des,30);
        cout<<"Enter your score:\n"; cin>>sco;
    }
    void out()
    {
        cout<<"EVENT NUMBER: "<<eno<<endl;
        cout<<"EVENT DESCRIPTION: "<<des<<endl;
        cout<<"SCORE: "<<sco<<endl;
        if(sco>100)
            cout<<"Y";
        else
            cout<<"N";

    }
};
int main()
{
    CONTEST c;
    cout<<"EVENT DEPARTMENT\n";
    c.input();
    c.out();
    return(0);
}
