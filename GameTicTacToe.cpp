#include<iostream>
using namespace std;
class game
{
    int g[3][3]={{9,9,9},{9,9,9},{9,9,9}};
    int pos,a,b;
public:
    int win=0;
    void p1()
    {
        cout<<"Player 1, Enter your position:\n";
        cin>>pos;
        a=pos/10;
        b=pos%10;
        g[a][b]=1;

    }
    void p2()
    {
        cout<<"Player 0, Enter your position:\n";
        cin>>pos;
        a=pos/10;
        b=pos%10;
        g[a][b]=0;
    }
    void display()
    {

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<" "<<g[i][j]<<" ";
            }
            cout<<"\n\n";
        }
    }
    void check2()
    {

        for(int i=0;i<3;i++)
        {

            if(g[i][0]+g[i][1]+g[i][2]==0)
            {
                cout<<"PLAYER 2 WON!!\n"; win=1;
                break;
            }

            else if(g[0][i]+g[1][i]+g[2][i]==0)
            {
                cout<<"PLAYER 2 WON!!\n"; win=1;
                break;
            }

            else if(g[1][1]+g[2][2]+g[0][0]==0)
            {
                cout<<"PLAYER 2 WON!!\n"; win=1;
                break;
            }

            else if(g[0][2]+g[1][1]+g[2][0]==0)
            {
                cout<<"PLAYER 2 WON!!\n"; win=1;
                break;
            }


        }

    }
    void check1()

    {
        for(int i=0;i<3;i++)
        {
            if(g[i][0]+g[i][1]+g[i][2]==3)
            {
                cout<<"PLAYER 1 WON!!\n"; win=1;
                break;
            }
            else if(g[0][i]+g[1][i]+g[2][i]==3)
            {
                cout<<"PLAYER 1 WON!!\n"; win=1;
                break;
            }
            else if(g[0][2]+g[1][1]+g[2][0]==3)
            {
                cout<<"PLAYER 1 WON!!\n"; win=1;
                break;
            }
            else if(g[1][1]+g[2][2]+g[0][0]==3)
            {
                cout<<"PLAYER 1 WON!!\n"; win=1;
                break;
            }

        }
    }
};
int main()
{
    int i;
    game n;
    cout<<"__|__|__\n";
    cout<<"__|__|__\n";
    cout<<"  |  |  \n";
    for(i=0;i<9;i++)
    {
        if(i%2==0)
        {
            n.p1();
            n.check1();
            n.display();
            if(n.win==1)
            {
                goto exit;
            }
        }
        else
        {
            n.p2();
            n.check2();
            n.display();
            if(n.win==1)
            {
                goto exit;
            }
        }
    }
    exit:
        cout<<"FINAL RESULT:\n";
    n.display();

    return (0);
}
