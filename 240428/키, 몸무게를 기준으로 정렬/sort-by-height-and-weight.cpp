#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class myclass{
    public:

    string name;
    int tall;
    int weight;

    myclass(){}
    myclass(string name, int tall, int weight){
        this->name=name;
        this->tall=tall;
        this->weight=weight;
    }

    string getname()const {return name;}
    int gettall()const {return tall;}
    int getweight()const {return weight;}
};

bool compare(const myclass & a, const myclass &b){
    if(a.tall!=b.tall){
        return a.tall<b.tall;
    }
    else {
        return a.weight>b.weight;
    }
}
int main() {
    int n;
    cin>>n;
    vector <myclass> vec;
    for(int i=0;i<n;i++){
        string name;
        int tall,weight;
        cin>>name>>tall>>weight;
        vec.push_back(myclass(name,tall,weight));
    }

    sort(vec.begin(),vec.end(),compare);
    for(myclass &a : vec){
        cout<<a.getname()<<" "<<a.gettall()<<" "<<a.getweight()<<"\n";
    }

    return 0;
}