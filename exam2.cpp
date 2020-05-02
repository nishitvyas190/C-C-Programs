#include<string.h>
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class CITY
{
private:
    int ccode;
    long int pop;
    float den,areac;
    char city[50];
public:
    void record()
    {
        cout<<"Enter the city code:\n"; cin>>ccode;
        cout<<"Enter the name of city:\n"; cin.ignore(); cin.getline(city,50);
        cout<<"Enter the total population of the city:\n"; cin>>pop;
        cout<<"Enter the area covered by the city:\n"; cin>>areac;
    }
    void show()
    {
        cout<<"City Name: "<<city<<endl;
        cout<<"City Code: :"<<ccode<<endl;
        cout<<"Area covered: "<<areac<<endl;
        cout<<"Total Population: "<<pop<<endl;
        den=pop/areac;
        cout<<"Density: "<<den<<endl;
        if(den>1000)
            cout<<"Highly Populated\n";
        else
            cout<<"On the way to >>>";
    }

};
int main()
{
    CITY c;
    cout<<"CENSUS DEPARTMENT\n";
    c.record();
    c.show();
    return(0);
}
