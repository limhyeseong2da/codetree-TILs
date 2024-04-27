#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class myclass{
    public:
    string str1,str2,str3;

    myclass(){}
    myclass(string str1,string str2,string str3){
        this->str1=str1;
        this->str2=str2;
        this->str3=str3;
    }
    string getstr1(){return str1;}
    string getstr2(){return str2;}
    string getstr3(){return str3;}
};

bool operator<(myclass &a, myclass &b){
    return a.getstr1()>b.getstr1();
};

int main() {
    int n;
    cin>>n;
    vector <myclass> array(n);

    for(int i=0;i<n;i++){
        string str1,str2,str3;
        cin>>str1>>str2>>str3;
        array[i]=myclass(str1,str2,str3);
    }

    sort(array.begin(),array.end());

    cout<<"name "<<array[0].getstr1();
    cout<<"\n";
    cout<<"addr "<<array[0].getstr2();
    cout<<"\n";
    cout<<"city "<<array[0].getstr3();
    
    return 0;
}