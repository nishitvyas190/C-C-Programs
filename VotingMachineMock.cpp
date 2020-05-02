#include<iostream>
#include<string.h>
using namespace std;
class evm
{
private:
    int a[5]={0,0,0,0,0};
    static int total;

public:
    void c1()
    {
        a[0]++;
        total++;
    }
    void c2()
    {
        a[1]++;
        total++;
    }
    void c3()
    {
        a[2]++;
        total++;
    }
    void c4()
    {
        a[3]++;
        total++;
    }
    void c5()
    {
        a[4]++;
        total++;
    }
    void display()
    {

        cout<<"RESULTS\n";
        cout<<"TOTAL VOTES: "<<total<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<"For candidate "<<(i+1)<<" ,the votes are "<<a[i]<<endl;
        }
    }
};
int evm::total=0;
int main()
{
    evm e;
    int choice;
     int flag[]={0,0,0,0,0};
    long int vid;
    cout<<"WELCOME\n";
    comp:
    cout<<"Enter your voter id no:\n";
    cin>>vid;
    int voters[]={123456,234567,345678,456789,567890,0000};

    if(vid==voters[5])
    {
        cout<<"Welcome administrator______"<<endl;
        e.display();
        goto r;
    }
    else if(vid==voters[0])
    {
        if(flag[0]==0)
        {cout<<"Welcome, Ojasbhai\n";
        flag[0]++;
        }
        else
        {
            cout<<"\n No voting multiple times"<<endl;
            goto comp;
        }
    }
        else if(vid==voters[1])
    {
        if(flag[1]==0)
        {cout<<"Welcome, Mashrubhai\n"; flag[1]++;}
        else
        {
            cout<<"\n No voting multiple times"<<endl;
            goto comp;
        }
    }

        else if(vid==voters[2])
    {
        if(flag[2]==0)
        {cout<<"Welcome, Kanjibhai\n"; flag[2]++;}
                else
        {
            cout<<"\n No voting multiple times"<<endl;
            goto comp;
        }
    }

        else if(vid==voters[3])
    {
        if(flag[3]==0)
        {cout<<"Welcome, Ajaybhai\n"; flag[3]++;}
                else
        {
            cout<<"\n No voting multiple times"<<endl;
            goto comp;
        }
    }

        else if(vid==voters[4])
    {
        if(flag[4]==0)
        {cout<<"Welcome, Suryabhai\n"; flag[4]++;}
                else
        {
            cout<<"\n No voting multiple times"<<endl;
            goto comp;
        }
    }

    else
        {
            cout<<"Wrong ID\n";
            goto comp;
        }

    cout<<"1) Arrow \t 2) Batman \t 3) Superman \t 4) Flash \t 5) Hulk\n";
    cout<<"Enter your choice:\n";
    cin>>choice;
    switch(choice)
    {
    case 1:
        e.c1();
        break;
    case 2:
        e.c2();
        break;
    case 3:
        e.c3();
        break;
    case 4:
        e.c4();
        break;
    case 5:
        e.c5();
        break;
    default:
        cout<<"Wrong choice\n";
    }
    goto comp;
    r:return(0);
}
