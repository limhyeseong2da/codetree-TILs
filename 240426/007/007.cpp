#include <string>
#include <iostream>
using namespace std;

class myclass{
    public:
    string str;
    char place;
    int time;
    myclass(string secret_code,char place, int time){
     this->str=secret_code;
     this->place =place;
     this->time=time;
    }
};

int main() {
    string str;
    char place;
    int time;
    cin>>str>>place>>time;
    myclass class1(str,place,time);
    cout<<"secret code : "<<str;
    cout<<endl;
    cout<<"meeting point : "<<place;
    cout<<endl;
    cout<<"time : "<<time;
    return 0;
}