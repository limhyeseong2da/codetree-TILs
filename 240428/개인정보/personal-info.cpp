#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

class myclass{
    public:
    string name;
    int tall;
    double weight;

    myclass(){}
    myclass(string name, int tall, double weight){
        this->name=name;
        this->tall=tall;
        this->weight=weight;
    }

    string getname()const{return name;}
    int gettall()const{return tall;}
    double getweight()const{return weight;}
};

bool compare1 (const myclass &a,const myclass &b){
    return a.gettall()>b.gettall();
}

bool compare2(const myclass &a, const myclass &b){
    return a.getname()<b.getname();
}

int main() {
    
    vector<myclass> vec;
    for(int i=0;i<5;i++){
        string name;
        int tall;
        double weight;
        cin>>name>>tall>>weight;
        vec.push_back(myclass(name,tall,weight));
    }

    sort(vec.begin(),vec.end(),compare2);
     cout<<"name"<<"\n";
    for(myclass & mc: vec){
        cout<<mc.getname()<<" "<<mc.gettall()<<" ";
        cout<<fixed<<setprecision(1)<<mc.getweight()<<"\n";
    }

    sort(vec.begin(),vec.end(),compare1);
    cout<<"\n"<<"height"<<"\n";

    for(myclass &mc :vec){
        cout<<mc.getname()<<" "<<mc.gettall()<<" ";
        cout<<fixed<<setprecision(1)<<mc.getweight()<<"\n"; 
    }
       return 0;
}