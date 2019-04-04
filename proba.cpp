#include<iostream>
#include<fstream>
using namespace std;
int main()
{
string Avcash,ac[8][6],cs,idcode="1001";
    int i=1;
    ifstream acc ("1.txt",ios::in);
    while(! acc.eof())
    {
        for(int j=1;j<=4;j++){
        acc>>cs;
        ac[i][j]=cs;
        }
        i++;

    }
    acc.close();
    for(int j=1;j<=i;j++){
    if(ac[j][1]==idcode){Avcash=ac[j][1]+"          " +ac[j][2]+"            " +ac[j][3];cout<<Avcash;break;}

    }
    if(Avcash=="")Avcash="****      |     NONE     |       0$     |";
    cout<<Avcash;
    return 0;
    }
