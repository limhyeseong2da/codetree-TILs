#include <iostream>
using namespace std;

class myclass{
    public:
    string str;
    char ch;
    int sec;

    myclass(string str,char ch,int sec){
        this->str=str;
        this->ch=ch;
        this->sec=sec;
    }

    string getstr(){return str;}
    char getch(){return ch;}
    int getsec(){return sec;}

};
int main() {
    string st;
    char a;
    int b;
    cin>>st>>a>>b;

    cout<<"code : "<<st<<"\n";
    cout<<"color : "<<a<<"\n";
    cout<<"second : "<<b;
    return 0;
}