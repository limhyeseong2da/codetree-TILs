#include <iostream>
#include <vector>
#include <algorithm>

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

    string getname(){return name;}
    int gettall(){return tall;}
    double getweight(){return weight;}
};

bool compare1 (myclass &a, myclass &b){
    return a.gettall()>b.gettall();
}

bool compare2(myclass &a, myclass &b){
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
        cout<<mc.getname()<<" "<<mc.gettall()<<" "<<mc.getweight()<<"\n";
    }

    sort(vec.begin(),vec.end(),compare1);
    cout<<"\n"<<"height"<<"\n";

    for(myclass &mc :vec){
        cout<<mc.getname()<<" "<<mc.gettall()<<" "<<mc.getweight()<<"\n"; 
    }
       return 0;
}