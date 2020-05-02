#include<fstream>
#include<iostream>
using namespace std;
 main()
{
    ofstream f1;
    int rno,marks;
    char name[50];
    f1.open("disco.txt",ios::out);
    for(int i=1;i<6;i++)
    {
        cout<<"Enter your name:\n"; gets(name);
        cout<<"Enter your roll:\n"; cin>>rno;
        cout<<"Enter your marks:\n"; cin>>marks;
        cin.ignore();
        f1<<name<<endl<<rno<<endl<<marks<<endl;
    }

    f1.close();
  /*  ifstream f1;
    f1.open("disco.txt",ios::in);
    f1.seekg(0);
    for(int i=0;i<6;i++)
    {
        fin>>rno>>marks;
        cout<<rno<<"\t"<<marks<<endl;
    }*/
}
