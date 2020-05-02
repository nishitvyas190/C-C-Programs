#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class res
{
private:
    char items[10],cname[50];
    int qty,price;
    static int total,bill;
public:
    void ms()
    {
        cout<<"Enter the quantity of Masala Dhosa:\n"; cin>>qty;
        price=60;
        bill=bill+(qty*price);
        total=total+bill;

    }
        void bms()
    {
        cout<<"Enter the quantity of Butter Masala Dhosa:\n"; cin>>qty;
        price=70;
        bill=bill+(qty*price);
        total=total+bill;

    }
        void gms()
    {
        cout<<"Enter the quantity of Garlic Masala Dhosa:\n"; cin>>qty;
        price=65;
        bill=bill+(qty*price);
        total=total+bill;

    }
        void mms()
    {
        cout<<"Enter the quantity of Maisuri Masala Dhosa:\n"; cin>>qty;
        price=70;
        bill=bill+(qty*price);
        total=total+bill;

    }
        void cms()
    {
        cout<<"Enter the quantity of Cheese Masala Dhosa:\n"; cin>>qty;
        price=80;
        bill=bill+(qty*price);
        total=total+bill;

    }
        void sd()
    {
        cout<<"Enter the quantity of Sada Dhosa:\n"; cin>>qty;
        price=50;
        bill=bill+(qty*price);
        total=total+bill;

    }
        void bsd()
    {
        cout<<"Enter the quantity of Butter Sada Dhosa:\n"; cin>>qty;
        price=55;
        bill=bill+(qty*price);
        total=total+bill;

    }
        void csd()
    {
        cout<<"Enter the quantity of Cheese Sada Dhosa:\n"; cin>>qty;
        price=70;
        bill=bill+(qty*price);
        total=total+bill;

    }
        void msu()
    {
        cout<<"Enter the quantity of Masala Uttapam:\n"; cin>>qty;
        price=70;
        bill=bill+(qty*price);
        total=total+bill;

    }
        void mixu()
    {
        cout<<"Enter the quantity of Mix Uttapam:\n"; cin>>qty;
        price=70;
        bill=bill+(qty*price);
        total=total+bill;

    }
        void ou()
    {
        cout<<"Enter the quantity of Onion Uttapam:\n"; cin>>qty;
        price=70;
        bill=bill+(qty*price);
        total=total+bill;

    }
        void tu()
    {
        cout<<"Enter the quantity of Tomato Uttapam:\n"; cin>>qty;
        price=70;
        bill=bill+(qty*price);
        total=total+bill;

    }
        void su()
    {
        cout<<"Enter the quantity of Sada Uttapam:\n"; cin>>qty;
        price=60;
        bill=bill+(qty*price);
        total=total+bill;
        //r1>>"Sada Uttapam ">>qty>>" ">>price>>" ">>bill;

    }
    void sams()
    {
        cout<<"Enter the quantity of Samosa:\n"; cin>>qty;
        price=30;
        bill=bill+(qty*price);
        total=total+bill;
    }
    void pats()
    {
        cout<<"Enter the quantity of Patise:\n"; cin>>qty;
        price=30;
        bill=bill+(qty*price);
        total=total+bill;
    }
    void dahiv()
    {
        cout<<"Enter the quantity of Dahivada:\n"; cin>>qty;
        price=45;
        bill=bill+(qty*price);
        total=total+bill;
    }
    void puab()
    {
        cout<<"Enter the quantity of Paubhaji:\n"; cin>>qty;
        price=60;
        bill=bill+(qty*price);
        total=total+bill;
    }
    void bpaub()
    {
        cout<<"Enter the quantity of Butter Paubhaji:\n"; cin>>qty;
        price=70;
        bill=bill+(qty*price);
        total=total+bill;
    }
    void cpaub()
    {
        cout<<"Enter the quantity of Sada Uttapam:\n"; cin>>qty;
        price=80;
        bill=bill+(qty*price);
        total=total+bill;
    }
    void bmilk()
    {
        cout<<"Enter the quantity of ButterMilk:\n"; cin>>qty;
        price=15;
        bill=bill+(qty*price);
        total=total+bill;
    }
    void frpaps()
    {
        cout<<"Enter the quantity of Papad(fried):\n"; cin>>qty;
        price=15;
        bill=bill+(qty*price);
        total=total+bill;
    }
    void coldd()
    {
        cout<<"Enter the quantity of Soft Drinks:\n"; cin>>qty;
        price=20;
        bill=bill+(qty*price);
        total=total+bill;
    }
    void mwater()
    {
        cout<<"Enter the quantity of Mineral Water Bottles:\n"; cin>>qty;
        price=20;
        bill=bill+(qty*price);
        total=total+bill;
    }
    void extrap()
    {
        cout<<"Enter the quantity of Extra Pau:\n"; cin>>qty;
        price=5;
        bill=bill+(qty*price);
        total=total+bill;
    }
    void displayb()
    {
        cout<<"Bill Amount: "<<bill<<endl;
        bill=0;
    }

    void tots()
    {
        cout<<"Total day's earning: "<<total<<endl;
        exit(0);
    }


};
int res::bill=0;
int res::total=0;
int main()
{
    //ofstream r1;
    //r1.open("rday1.txt",ios::out)
    res r;
    char cname[50];
    int c,id;

    cout<<"**************************SUSWAGATAM**************************\n";
    start:
        cout<<"Enter the customer name:\n"; cin.getline(cname,50);
        //r1<<name;
        s2:

        cout<<"Enter the item ID:\n"; cin>>id;
        switch(id)
        {
        case 1:
            r.ms();
            break;
        case 2:
            r.bms();
            break;
        case 3:
            r.mms();
            break;
        case 4:
            r.gms();
            break;
        case 5:
            r.cms();
            break;
        case 6:
            r.sd();
            break;
        case 7:
            r.bsd();
            break;
        case 8:
            r.csd();
            break;
        case 9:
            r.msu();
            break;
        case 10:
            r.mixu();
            break;
        case 11:
            r.tu();
            break;
        case 12:
            r.ou();
            break;
        case 13:
            r.su();
            break;
        case 14:
            r.sams();
            break;
        case 15:
            r.pats();
            break;
        case 16:
            r.dahiv();
            break;
        case 17:
            r.puab();
            break;
        case 18:
            r.bpaub();
            break;
        case 19:
            r.cpaub();
            break;
        case 20:
            r.bmilk();
            break;
        case 21:
            r.frpaps();
            break;
        case 22:
            r.coldd();
            break;
        case 23:
            r.mwater();
            break;
        case 24:
            r.extrap();
            break;
        case 25:
            r.tots();
            break;
        default:
            cout<<"WRONG CHOICE\n";

        }
        cout<<"DO you want to continue?(1/0)\n"; cin>>c;
        if(c==1)
            goto s2;
            /*else if(c==99)
            {
                r.tots();

            }*/
        else
            r.displayb();
            cin.ignore();
        goto start;
        return(0);

}
