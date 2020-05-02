#include<string.h>
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class ITEM
{
private:
    int icode;
    char iname[50];
    float price;
    float off;
    int qty;
    float basep;
    float bill;
    void offer()
    {
        if(qty<=50)
            {
                    off=0;
                    bill=qty*basep;
            }

        else if(qty>50 && qty<100)
            {
                off=0.05;
                bill=0.95*qty*basep;
            }
        else
            {
                off=0.1;
                bill=0.1*basep*qty;
            }
    }
public:
    void getd()
    {
        cout<<"Enter the item code:\n"; cin>>icode;
        cout<<"Enter the name of item:\n"; cin.ignore(); cin.getline(iname,50);
        cout<<"Enter the quantity of item:\n"; cin>>qty;
        cout<<"Enter the price of item:\n"; cin>>basep;
        offer();
    }
    void show()
    {
        cout<<"I-code: "<<icode<<endl;
        cout<<"I-name: "<<iname<<endl;
        cout<<"Price of item: "<<basep<<endl;
        cout<<"Quantity: "<<qty<<endl;
        cout<<"Total: "<<bill;
    }

};
int main()
{
    ITEM i;
    cout<<"WELCOME TO WALLMART\n";
    i.getd();
    i.show();
    //getch();
    return(0);
}
