#include<iostream>
#include<windows.h>
#include<conio.h>
#include<iostream>
#include<string>
#include<fstream>
#include <time.h>
#include <ctime>
using namespace std;

int main();
void bankGameMenu();
string coutChar(int i,char c,int colour,int type=1);
int coutString(string s,int colour);
void MainMenuChoose();
void colour(int i);
void Option0();//ready
void Option1();
void Option2();
void Option3();
void Option4();
void Option5();
void Option6();
void Option7();
void Option8();
void Option9();
void CinNAME();
void cleaner();
void CinIDcode(int option);
void CinPIN(int option);
void CinMONEY(int option);
void CinDIVIDENT(int option);
string Acash(string idcode);
string Aaccounts(int check);
string Acredit(int check);
string Adeposit(int check);
bool isIDcode(string idcode);
bool isAccount(string idcode,string pin);
void GenIDcode();
void GenPIN();
void Delete(string id);

bool EXIT=false;
string NAME,IDcode,PIN,MONEY,DIVIDENT,DELETEAc="SUCCESSFULL";;
int BrAcc,RGPIN;

int main()
{
    srand(time(NULL));
    RGPIN = rand()%9999+1;
    if(EXIT)return 0;
    ifstream Bracc ("BrAcc.txt",ios::in);
    Bracc>>BrAcc;
    Bracc.close();
    colour(144);
    system("cls");
    cleaner();
    colour(144);
    bankGameMenu();
    if(EXIT)return 0;
    colour(144);
    MainMenuChoose();
    if(EXIT)return 0;
    return 0;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void bankGameMenu()
{
    system("cls");
    int n;
    coutChar(79,' ',144);cout<<endl;
    coutChar(79,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(20,' ',119);coutString("Bank FML (Fast Money Look)",112);coutChar(20,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);coutString("Author : Yordan Petkov",112);coutChar(22,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);n=coutString("(0)->New account",112);coutChar(80-36-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);n=coutString("(1)->Available cash",112);coutChar(80-36-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);n=coutString("(2)->Withdraw money",112);coutChar(80-36-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);n=coutString("(3)->Import money",112);coutChar(80-36-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);n=coutString("(4)->Credit",112);coutChar(80-36-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);n=coutString("(5)->Deposit",112);coutChar(80-36-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);n=coutString("(6)->All accounts",112);coutChar(80-36-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);n=coutString("(7)->All credits",112);coutChar(80-36-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);n=coutString("(8)->All deposits",112);coutChar(80-36-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);n=coutString("(9)->Closing account",112);coutChar(80-36-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);n=coutString("(ESP)->Exit",112);coutChar(80-36-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);n=coutString("press your answers'key  _",112);coutChar(80-36-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(79,' ',144);cout<<endl;
}

string coutChar(int i,char c,int colour,int type)
{
    string type2="";
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), colour );
    if(type==1)
    {
        for(int j=1;j<=i;j++)
        cout<<c;
    }
    else
    {
        for(int j=1;j<=i;j++)type2=type2+c;
        return type2;
    }
    return "";

}

int coutString(string s,int colour)
{
    int n;
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), colour );
    cout<<s;
    n=s.size();
    return n;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void MainMenuChoose()
{
    char MainMenuOption;
    MainMenuOption=getch();
    if((MainMenuOption>47 && MainMenuOption<58 )||MainMenuOption == 27)
    {
        if(MainMenuOption==27){EXIT=true;return;}
    if(MainMenuOption==48)Option0();//if is 0
    if(MainMenuOption==49)Option1();//if is 1
    if(MainMenuOption==50)Option2();//if is 2
    if(MainMenuOption==51)Option3();//if is 3
    if(MainMenuOption==52)Option4();//if is 4
    if(MainMenuOption==53)Option5();//if is 5
    if(MainMenuOption==54)Option6();//if is 6
    if(MainMenuOption==55)Option7();//if is 7
    if(MainMenuOption==56)Option8();//if is 8
    if(MainMenuOption==57)Option9();//if is 9
    //if is esc
    }
    MainMenuChoose();
}
void colour(int i)
{
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), i );
}

void Option0()
{
    system("cls");
    char c;
    int n=0;
    coutChar(79,' ',144);cout<<endl;
    coutChar(79,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(20,' ',119);coutString("Bank FML (Fast Money Look)",112);coutChar(20,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);coutString("Author : Yordan Petkov",112);coutChar(22,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(26,' ',119);n=coutString("(0)->New account",112);coutChar(80-40-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("Write your name (must be 1 word (Yordan_Petkov))",112);coutChar(80-28-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("_",112);n=NAME.size();if(n==0){if(getch()==27){main();return;}CinNAME();Option0();goto Finish0;}cout<<NAME;coutChar(80-29-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("Your IDcode is: ",112)+4;GenIDcode();coutChar(80-28-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("Your PIN is: ",112)+4;GenPIN();coutChar(80-28-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(26,' ',119);n=coutString("Press Esc to back",112);coutChar(80-40-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(79,' ',144);cout<<endl;
    Finish0:
        colour(144);
        c=getch();
        if(c==27)main();
        else Option0();

}

void Option1()
{
    system("cls");
    char c;
    int n=0,m=0;
    coutChar(79,' ',144);cout<<endl;
    coutChar(79,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(20,' ',119);coutString("Bank FML (Fast Money Look)",112);coutChar(20,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);coutString("Author : Yordan Petkov",112);coutChar(22,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(26,' ',119);n=coutString("(1)->Available cash",112);coutChar(80-40-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("Write your IDcode : ",112);m=IDcode.size();if(m==0){if(getch()==27){main();return;}CinIDcode(1);Option1();goto Finish1;}cout<<IDcode;coutChar(80-28-n-m,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("Write your PIN : ",112);m=PIN.size();if(m==0){CinPIN(1);Option1();goto Finish1;}cout<<PIN;coutChar(80-28-n-m,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(11,' ',119);n=coutString("IDcode    |     Name     |     Money    |",112);coutChar(80-25-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(11,' ',119);n=coutString(Acash(IDcode),112);coutChar(80-25-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(26,' ',119);n=coutString("Press Esc to back",112);coutChar(80-40-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(80,' ',144);cout<<endl;

        Finish1:
        colour(144);
        c=getch();
        if(c==27){main();return;}
        else Option1();
}

void Option2()
{
        system("cls");
    char c;
    int n=0,m=0;
    coutChar(79,' ',144);cout<<endl;
    coutChar(79,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(20,' ',119);coutString("Bank FML (Fast Money Look)",112);coutChar(20,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);coutString("Author : Yordan Petkov",112);coutChar(22,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(26,' ',119);n=coutString("(2)->Withdraw money",112);coutChar(80-40-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("Write your IDcode : ",112);m=IDcode.size();if(m==0){if(getch()==27){main();return;}CinIDcode(2);Option2();goto Finish2;}cout<<IDcode;coutChar(80-28-n-m,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("Write your PIN : ",112);m=PIN.size();if(m==0){CinPIN(2);Option2();goto Finish2;}cout<<PIN;coutChar(80-28-n-m,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(11,' ',119);n=coutString("IDcode    |     Name     |     Money    |",112);coutChar(80-25-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(11,' ',119);n=coutString(Acash(IDcode),112);coutChar(80-25-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("How many you want to draw : ",112);m=MONEY.size();if(m==0){CinMONEY(2);Option2();goto Finish2;}cout<<MONEY;coutChar(80-28-n-m,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(26,' ',119);n=coutString("Press Esc to back",112);coutChar(80-40-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(80,' ',144);cout<<endl;

        Finish2:
        colour(144);
        c=getch();
        if(c==27){main();return;}
        else Option2();

}

void Option3()
{
    system("cls");
    char c;
    int n=0,m=0;
    coutChar(79,' ',144);cout<<endl;
    coutChar(79,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(20,' ',119);coutString("Bank FML (Fast Money Look)",112);coutChar(20,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);coutString("Author : Yordan Petkov",112);coutChar(22,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(26,' ',119);n=coutString("(3)->Import money",112);coutChar(80-40-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("Write your IDcode : ",112);m=IDcode.size();if(m==0){if(getch()==27){main();return;}CinIDcode(3);Option3();goto Finish3;}cout<<IDcode;coutChar(80-28-n-m,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("Write your PIN : ",112);m=PIN.size();if(m==0){CinPIN(3);Option3();goto Finish3;}cout<<PIN;coutChar(80-28-n-m,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(11,' ',119);n=coutString("IDcode    |     Name     |     Money    |",112);coutChar(80-25-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(11,' ',119);n=coutString(Acash(IDcode),112);coutChar(80-25-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("How many you want to draw : ",112);m=MONEY.size();if(m==0){CinMONEY(3);Option3();goto Finish3;}cout<<MONEY;coutChar(80-28-n-m,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(26,' ',119);n=coutString("Press Esc to back",112);coutChar(80-40-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(80,' ',144);cout<<endl;

        Finish3:
        colour(144);
        c=getch();
        if(c==27){main();return;}
        else Option3();

}

void Option4()
{
    system("cls");
    char c;
    int n=0,m=0;
    coutChar(79,' ',144);cout<<endl;
    coutChar(79,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(20,' ',119);coutString("Bank FML (Fast Money Look)",112);coutChar(20,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);coutString("Author : Yordan Petkov",112);coutChar(22,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(26,' ',119);n=coutString("(4)->Credit",112);coutChar(80-40-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("Write your IDcode : ",112);m=IDcode.size();if(m==0){if(getch()==27){main();return;}CinIDcode(4);Option4();goto Finish4;}cout<<IDcode;coutChar(80-28-n-m,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("Write your PIN : ",112);m=PIN.size();if(m==0){CinPIN(4);Option4();goto Finish4;}cout<<PIN;coutChar(80-28-n-m,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(11,' ',119);n=coutString("Write how much you want to be your credit :",112);coutChar(80-25-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("_",112);n=MONEY.size();if(n==0){CinMONEY(4);Option4();goto Finish4;}cout<<MONEY;coutChar(80-29-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(11,' ',119);n=coutString("Dividend (%) :",112);coutChar(80-25-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("_",112);n=DIVIDENT.size();if(n==0){CinDIVIDENT(4);Option4();goto Finish4;}cout<<DIVIDENT;coutChar(80-29-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(26,' ',119);n=coutString("Press Esc to back",112);coutChar(80-40-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(80,' ',144);cout<<endl;

        Finish4:
        colour(144);
        c=getch();
        if(c==27){main();return;}
        else Option4();
}

void Option5()
{
    system("cls");
    char c;
    int n=0,m=0;
    coutChar(79,' ',144);cout<<endl;
    coutChar(79,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(20,' ',119);coutString("Bank FML (Fast Money Look)",112);coutChar(20,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);coutString("Author : Yordan Petkov",112);coutChar(22,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(26,' ',119);n=coutString("(5)->Deposit",112);coutChar(80-40-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("Write your IDcode : ",112);m=IDcode.size();if(m==0){if(getch()==27){main();return;}CinIDcode(5);Option5();goto Finish5;}cout<<IDcode;coutChar(80-28-n-m,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("Write your PIN : ",112);m=PIN.size();if(m==0){CinPIN(5);Option5();goto Finish5;}cout<<PIN;coutChar(80-28-n-m,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(11,' ',119);n=coutString("Write how much you want to be your deposit :",112);coutChar(80-25-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("_",112);n=MONEY.size();if(n==0){CinMONEY(5);Option5();goto Finish5;}cout<<MONEY;coutChar(80-29-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(11,' ',119);n=coutString("Dividend (%) :",112);coutChar(80-25-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("_",112);n=DIVIDENT.size();if(n==0){CinDIVIDENT(5);Option5();goto Finish5;}cout<<DIVIDENT;coutChar(80-29-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(26,' ',119);n=coutString("Press Esc to back",112);coutChar(80-40-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(80,' ',144);cout<<endl;

        Finish5:
        colour(144);
        c=getch();
        if(c==27){main();return;}
        else Option5();
}

void Option6()
{
    system("cls");
    char c;
    int n=0,m=0;
    coutChar(79,' ',144);cout<<endl;
    coutChar(79,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(20,' ',119);coutString("Bank FML (Fast Money Look)",112);coutChar(20,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);coutString("Author : Yordan Petkov",112);coutChar(22,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(26,' ',119);n=coutString("(6)->All accounts",112);coutChar(80-40-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(11,' ',119);n=coutString("IDcode    |     Name     |     Money    |",112);coutChar(80-25-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    for(int i=0;i<BrAcc;i++){coutChar(6,' ',144);coutChar(1,'*',113);coutChar(11,' ',119);n=coutString(Aaccounts(i),112);coutChar(80-25-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;}
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(26,' ',119);n=coutString("Press Esc to back",112);coutChar(80-40-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(80,' ',144);cout<<endl;

        Finish6:
        colour(144);
        c=getch();
        if(c==27){main();return;}
        else Option6();
}

void Option7()
{
    system("cls");
    char c;
    int n=0,m=0;
    coutChar(79,' ',144);cout<<endl;
    coutChar(79,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(20,' ',119);coutString("Bank FML (Fast Money Look)",112);coutChar(20,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);coutString("Author : Yordan Petkov",112);coutChar(22,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(26,' ',119);n=coutString("(7)->All credits ",112);coutChar(80-40-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(11,' ',119);n=coutString("IDcode    |     Name     |     Credit    |",112);coutChar(80-25-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    for(int i=0;i<BrAcc;i++){coutChar(6,' ',144);coutChar(1,'*',113);coutChar(11,' ',119);n=coutString(Acredit(i),112);coutChar(80-25-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;}
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(26,' ',119);n=coutString("Press Esc to back",112);coutChar(80-40-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(80,' ',144);cout<<endl;

        Finish7:
        colour(144);
        c=getch();
        if(c==27){main();return;}
        else Option7();
}

void Option8()
{
    system("cls");
    char c;
    int n=0,m=0;
    coutChar(79,' ',144);cout<<endl;
    coutChar(79,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(20,' ',119);coutString("Bank FML (Fast Money Look)",112);coutChar(20,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);coutString("Author : Yordan Petkov",112);coutChar(22,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(26,' ',119);n=coutString("(8)->All deposits ",112);coutChar(80-40-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(11,' ',119);n=coutString("IDcode    |     Name     |     Deposit    |",112);coutChar(80-25-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    for(int i=0;i<BrAcc;i++){coutChar(6,' ',144);coutChar(1,'*',113);coutChar(11,' ',119);n=coutString(Adeposit(i),112);coutChar(80-25-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;}
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(26,' ',119);n=coutString("Press Esc to back",112);coutChar(80-40-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(80,' ',144);cout<<endl;

        Finish8:
        colour(144);
        c=getch();
        if(c==27){main();return;}
        else Option8();
}

void Option9()
{
    system("cls");
    char c;
    int n=0,m=0;
    coutChar(79,' ',144);cout<<endl;
    coutChar(79,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(20,' ',119);coutString("Bank FML (Fast Money Look)",112);coutChar(20,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(22,' ',119);coutString("Author : Yordan Petkov",112);coutChar(22,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(26,' ',119);n=coutString("(9)->Clossing account",112);coutChar(80-40-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("Write your IDcode : ",112);m=IDcode.size();if(m==0){if(getch()==27){main();return;}CinIDcode(9);Option9();goto Finish9;}cout<<IDcode;coutChar(80-28-n-m,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString("Write your PIN : ",112);m=PIN.size();if(m==0){CinPIN(9);Option9();goto Finish9;}cout<<PIN;coutChar(80-28-n-m,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(11,' ',119);n=coutString("Your account is deleting  ...",112);Delete(IDcode);coutChar(80-25-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(14,' ',119);n=coutString(DELETEAc,112);coutChar(80-28-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(26,' ',119);n=coutString("Press Esc to back",112);coutChar(80-40-n,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(1,'*',113);coutChar(66,' ',119);coutChar(1,'*',113);coutChar(5,' ',144);cout<<endl;
    coutChar(6,' ',144);coutChar(68,'~',113);coutChar(5,' ',144);cout<<endl;
    coutChar(80,' ',144);cout<<endl;

        Finish9:
        colour(144);
        c=getch();
        if(c==27){main();return;}
        else Option9();
}

void CinNAME()
{
    int n,F;
    cin>>NAME;
    n=NAME.size();
    if(n>15)
    {
        F=n-15;
        NAME.erase(11,F+4);
        NAME=NAME+"...";
    }
}


void cleaner()
{
    NAME="";
    IDcode="";
    PIN="";
    MONEY="";
    DIVIDENT="";
    DELETEAc="SUCCESSFULL";
}

void CinIDcode(int option)
{
    cin>>IDcode;
    if((IDcode.size()!=4 || isIDcode(IDcode)==false) && option==1){IDcode="";Option1();}
    if((IDcode.size()!=4 || isIDcode(IDcode)==false) && option==2){IDcode="";Option2();}
    if((IDcode.size()!=4 || isIDcode(IDcode)==false) && option==3){IDcode="";Option3();}
    if((IDcode.size()!=4 || isIDcode(IDcode)==false) && option==4){IDcode="";Option4();}
    if((IDcode.size()!=4 || isIDcode(IDcode)==false) && option==5){IDcode="";Option5();}
    if((IDcode.size()!=4 || isIDcode(IDcode)==false) && option==6){IDcode="";Option6();}
    if((IDcode.size()!=4 || isIDcode(IDcode)==false) && option==7){IDcode="";Option7();}
    if((IDcode.size()!=4 || isIDcode(IDcode)==false) && option==8){IDcode="";Option8();}
    if((IDcode.size()!=4 || isIDcode(IDcode)==false) && option==9){IDcode="";Option9();}
}

void CinPIN(int option)
{
    cin>>PIN;
    if((PIN.size()!=4 || isAccount(IDcode,PIN)==false) && option==1){IDcode="";PIN="";Option1();return;}
    if((PIN.size()!=4 || isAccount(IDcode,PIN)==false) && option==2){IDcode="";PIN="";Option2();return;}
    if((PIN.size()!=4 || isAccount(IDcode,PIN)==false) && option==3){IDcode="";PIN="";Option3();return;}
    if((PIN.size()!=4 || isAccount(IDcode,PIN)==false) && option==4){IDcode="";PIN="";Option4();return;}
    if((PIN.size()!=4 || isAccount(IDcode,PIN)==false) && option==5){IDcode="";PIN="";Option5();return;}
    if((PIN.size()!=4 || isAccount(IDcode,PIN)==false) && option==6){IDcode="";PIN="";Option6();return;}
    if((PIN.size()!=4 || isAccount(IDcode,PIN)==false) && option==7){IDcode="";PIN="";Option7();return;}
    if((PIN.size()!=4 || isAccount(IDcode,PIN)==false) && option==8){IDcode="";PIN="";Option8();return;}
    if((PIN.size()!=4 || isAccount(IDcode,PIN)==false) && option==9){IDcode="";PIN="";Option9();return;}
}

void CinMONEY(int option)
{
    cin>>MONEY;
    int n;
    n=MONEY.size();
    for(int i=0;i<n;i++)
    if(MONEY[i]<'0' || MONEY[i]>'9')
    {
            if(option==2){MONEY="";Option2();return;}
            if(option==3){MONEY="";Option3();return;}
            if(option==4){MONEY="";Option4();return;}
            if(option==5){MONEY="";Option5();return;}
    }
    MONEY=MONEY+"$";
}

void CinDIVIDENT(int option)
{
    cin>>DIVIDENT;
    int n;
    n=DIVIDENT.size();
    if(DIVIDENT[0]=='.' && option==4){DIVIDENT="";Option4();return;}
    if(DIVIDENT[0]=='.' && option==5){DIVIDENT="";Option5();return;}
    for(int i=0;i<n;i++)
    {
        if((DIVIDENT[i]<48 || DIVIDENT[i] >57 )&& DIVIDENT[i]!='.' && option==4){DIVIDENT="";Option4();return;}
        if((DIVIDENT[i]<48 || DIVIDENT[i] >57 )&& DIVIDENT[i]!='.' && option==5){DIVIDENT="";Option5();return;}
    }
    DIVIDENT=DIVIDENT+"%";
}

string Acash(string idcode)
{
    string Avcash="",cs;
    int i=1,check=0;
    acash:
        if(check==BrAcc)return "****      |     NONE     |       0$     |";
    ifstream acc ("accounts.txt",ios::in);
   // while(! acc.eof())
    //{
        for(int i=0;i<=check;i++)
        for(int j=1;j<=4;j++)
            acc>>cs;
        for(int j=1;j<=4;j++){
        acc>>cs;
        if(j==4)continue;
        if(j==1){if(cs!=idcode){check++;goto acash;}Avcash=Avcash+cs+"       ";}
        if(j==2)
        {
            Avcash=Avcash+cs;
            for(int k=1;k<=17-cs.size();k++)
                Avcash=Avcash+" ";
        }
        if(j==3) Avcash=Avcash+cs;
        }
        i=2;
        acc.close();
   // }
    return Avcash;
}
string Aaccounts(int check)
{
    string Avcash="",cs;
    int i=1;
    ifstream acc ("accounts.txt",ios::in);
   // while(! acc.eof())
    //{
        for(int i=0;i<=check;i++)
        for(int j=1;j<=4;j++)
            acc>>cs;
        for(int j=1;j<=4;j++){
        acc>>cs;
        if(j==4)continue;
        if(j==1)Avcash=Avcash+cs+"       ";
        if(j==2)
        {
            Avcash=Avcash+cs;
            for(int k=1;k<=17-cs.size();k++)
                Avcash=Avcash+" ";
        }
        if(j==3) Avcash=Avcash+cs;
        }
        i=2;
        acc.close();
   // }
    return Avcash;
}

string Acredit(int check)
{
    /*string Avcash;
    if(NAME.size()!=0)Avcash="**** | "+NAME+" | "+"1000$";
    else Avcash="****      |     NONE     |       0$      |";
    return Avcash;*/
        string Avcash="",cs;
    int i=1;
    ifstream acc ("credits.txt",ios::in);
   // while(! acc.eof())
    //{
        for(int i=0;i<=check;i++)
        for(int j=1;j<=4;j++)
            acc>>cs;
        for(int j=1;j<=4;j++){
        acc>>cs;
        if(j==4)continue;
        if(j==1)Avcash=Avcash+cs+"       ";
        if(j==2)
        {
            Avcash=Avcash+cs;
            for(int k=1;k<=17-cs.size();k++)
                Avcash=Avcash+" ";
        }
        if(j==3) Avcash=Avcash+cs;
        }
        i=2;
        acc.close();
   // }
    return Avcash;
}

string Adeposit(int check)
{
    /*string Avcash;
    if(NAME.size()!=0)Avcash="**** | "+NAME+" | "+"1000$";
    else Avcash="****      |     NONE     |       0$       |";
    return Avcash;*/
        string Avcash="",cs;
    int i=1;
    ifstream acc ("deposits.txt",ios::in);
   // while(! acc.eof())
    //{
        for(int i=0;i<=check;i++)
        for(int j=1;j<=4;j++)
            acc>>cs;
        for(int j=1;j<=4;j++){
        acc>>cs;
        if(j==4)continue;
        if(j==1)Avcash=Avcash+cs+"       ";
        if(j==2)
        {
            Avcash=Avcash+cs;
            for(int k=1;k<=17-cs.size();k++)
                Avcash=Avcash+" ";
        }
        if(j==3) Avcash=Avcash+cs;
        }
        i=2;
        acc.close();
   // }
    return Avcash;
}

bool isIDcode(string idcode)
{
    string cs;
    int check=0;
    acash:
    if(check==BrAcc)return false;
    ifstream acc ("accounts.txt",ios::in);
   // while(! acc.eof())
    //{
        for(int i=0;i<=check;i++)
        for(int j=1;j<=4;j++)
            acc>>cs;
        for(int j=1;j<=4;j++)
        {
        acc>>cs;

        if(j==1){if(cs!=idcode){check++;goto acash;}return true;}
        else continue;

        }
        acc.close();
   // }
}

bool isAccount(string idcode , string pin)
{
        string cs;
    int check=0,br=0;
    acash:
    if(check==BrAcc)return false;
    ifstream acc ("accounts.txt",ios::in);
   // while(! acc.eof())
    //{
        for(int i=0;i<=check;i++)
        for(int j=1;j<=4;j++)
            acc>>cs;
        for(int j=1;j<=4;j++)
        {
        acc>>cs;

        if(j==1)
        {
                if(cs!=idcode){check++;goto acash;}
                else br=1;
        }

        if(j==4 && br==1)
        {
            if(cs!=pin){check++;goto acash;}
            else return true;
        }
        else if(j!=1) continue;

        }
        acc.close();

}

string presentIDcode(string code)
{
    int n;
    n=code.size();
    if(n==1)code="000"+code;
    else if(n==2)code="00"+code;
         else if(n==3)code="0"+code;
    return code;
}

string nextIDcode(string code)
{
    int n=code.size();
    if(code[3]=='9')
    {
       code[3]='0';
       if(code[2]=='9')
       {
           code[2]='0';
           if(code[1]=='9')
           {
                 code[1]='0';
                 if(code[0]=='9')cout<<"ALL IS FULL"<<endl;
                 else code[0]++;
           }
           else code[1]++;
       }
       else code[2]++;
    }
    else code[3]++;
    return code;
}

string nextNumber(string number)
{
    int n;
    n=number.size();
    if(n==1)
    {
        if(number=="9")number="10";
        else number[0]++;
    }
    if(n==2)
    {
        if(number[1]=='9')
        {
            number[1]='0';
            if(number[0]=='9')
            {
                number="100";
            }
            else number[0]++;
        }
        else number[1]++;
    }
    if(n==3)
    {
        if(number[2]=='9')
        {
            number[2]='0';
            if(number[1]=='9')
            {
                number[1]='0';
                if(number[0]=='9')
                {
                    number="1000";
                }
                else number[0]++;
            }
            else number[1]++;
        }
        else number[2]++;
    }
    if(n==4)
    {
        if(number[3]=='9')
        {
            number[3]='0';
            if(number[2]=='9')
            {
                number[2]='0';
                if(number[1]=='9')
                {
                    if(number[0]=='9')cout<<"ALL IS FULL"<<endl;
                    else number[0]++;
                }
                else number[1]++;
            }
            else number[2]++;
        }
        else number[3]++;
    }
    return number;

}


void GenIDcode()
{
    string lcod,cs,idcode,FORnextID,nextid;
    int check=0,flag=0;
    acash:
    ifstream acc ("lastIDcode.txt",ios::in);
    if(acc.is_open())
    {
        acc>>cs;
        FORnextID=cs;
        nextid=nextNumber(FORnextID);
        cs=presentIDcode(cs);
        idcode=nextIDcode(cs);
        cout<<idcode;
    }
        acc.close();
     getch();
    ofstream acc2 ("lastIDcode.txt",ios::out);
    if(acc2.is_open())
    {
        acc2<<nextid;

    }
    acc2.close();
    ofstream accin ("accounts.txt",ios::app);
    if(accin.is_open())
    {
        accin<<idcode<<" ";
        accin<<NAME<<" ";
        accin<<"0$ ";
    }
    accin.close();

}

void GenPIN()
{

    if(RGPIN%10==RGPIN)
    {
         cout<<"000"<<RGPIN;
        ofstream accin ("accounts.txt",ios::app);
    if(accin.is_open())
    {
        accin<<"000"<<RGPIN;
        accin<<endl;
    }
    accin.close();
    }
    else if(RGPIN%100==RGPIN)
    {
        cout<<"00"<<RGPIN;
                ofstream accin ("accounts.txt",ios::app);
    if(accin.is_open())
    {
        accin<<"00"<<RGPIN;
        accin<<endl;
    }
    accin.close();
    }

         else if(RGPIN%1000==RGPIN)
         {
             cout<<"0"<<RGPIN;
                     ofstream accin ("accounts.txt",ios::app);
    if(accin.is_open())
    {
        accin<<"0"<<RGPIN;
        accin<<endl;
    }
    accin.close();
    }

         else
         {
             cout<<RGPIN;
                     ofstream accin ("accounts.txt",ios::app);
    if(accin.is_open())
    {
        accin<<RGPIN;
        accin<<endl;
    }
    accin.close();
    }
}
void Delete(string id)
{
    string cid;
    int j=0;
    ifstream accdel ("accounts.txt",ios::in);
    while(! accdel.eof())
    {
        for(int i=1;i<=4;i++)
        {
            if(i!=1)continue;
            accdel>>cid;
            if(cid==id)
            {
                accdel="";
            }
                j++;
        }
    }
    accdel.close();
}

}

