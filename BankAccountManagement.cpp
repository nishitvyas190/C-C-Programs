#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class account
{

        public:
        char acctype[10],name[50];
        long int accno;



        void input_details()
        {
            cout<<"Enter your account number:\n"; cin>>accno;
            cout<<"Enter your name:\n";
            cin.getline(name,50);

        }

};
class cur_acc:public account
{

    float upbal,rate=0.5,withdraw,deposit;
    public:
         float cbal;
            void deposit()
    {
        cout<<"Enter your current balance:\n"; cin>>cbal;
        if(cbal<5000)
        {
            cout<<"Your balance is insufficient, do recharge it.\n";
            upbal=cbal-100;
            cout<<"The updated balance after deduction is: "<<upbal<<"\n";
        }
        cout<<"Enter the amount to be deposited:\n";
        cin>>deposit;
        upbal=cbal+deposit;
        cout<<"The updated balance is "<<upbal<<"\n";

    }

    void getdata()
    {
        account::input_details();
    }

    void withdraw()
    {
        cout<<"Enter your current balance:\n"; cin>>cbal;
        if(cbal<5000)
        {

            cout<<"Your balance is insufficient, do recharge it.\n";
            upbal=cbal-100;
            cout<<"The updated balance after deduction is: "<<upbal<<"\n";
        }

        upbal=cbal-withdraw;
        cout<<"The updated balance is "<<upbal;

    }
    void display()
    {
        cout<<"Your name: "<<name<<"\n";
        cout<<"Account type: "<<acctype<<"\n";
        cout<<"Account number: "<<accno<<"\n";
        cout<<"Current balance after updation is: "<<upbal<<"\n";
    }
};
class sav_acc:public account
{

    float upbal,rate=0.05,withdraw,deposit;
    public:
         float cbal;
        void getdata()
        {
            account::input_details();
        }
    void deposit()
    {
        cout<<"Enter your current balance:\n"; cin>>cbal;
        cbal=cbal+cbal*(1+rate/100);
        cout<<"Enter the amount to be deposited:\n";
        cin>>deposit;
        upbal=(cbal+deposit);
        cout<<"The updated balance after deposition is: "<<upbal<<"\n";

    }
    void withdraw()
        {

            cout<<"Enter your current balance:\n"; cin>>cbal;
            cbal=cbal+cbal*(1+rate/100);
            cout<<"The updated balance after deduction is: "<<upbal<<"\n";
            upbal=(cbal-withdraw);
            cout<<"The updated balance is "<<upbal;
        }

    void display()
    {
        cout<<"Your name: "<<name<<endl;
        cout<<"Account type: "<<acctype<<"\n";
        cout<<"Account number: "<<accno<<"\n";
        cout<<"Current balance after updation is: "<<upbal<<"\n";
    }
};
int main()
{
    cur_acc c;
    sav_acc s;
    char actype[10],pro[10];
    cout<<"Enter your account type:\n";
    gets(actype);
    if(strcmpi(actype,"Current")==0)
    {
        cout<<"Deposit or Withdraw?\n";
        gets(pro);
        if(strcmpi(pro,"Deposit")==0)
        {
            c.getdata();
            c.deposit();
            c.display();
        }
        else
        {
            c.getdata();
            c.withdraw();
            c.display();
        }
    }
    else
    {
        cout<<"Deposit or Withdraw?\n";
        gets(pro);
                if(strcmpi(pro,"Deposit")==0)
        {
            s.getdata();
            s.deposit();
            s.display();
        }
        else
        {
            s.getdata();
            s.withdraw();
            s.display();
        }

    }
    return 0;

}
