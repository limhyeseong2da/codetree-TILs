#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class myclass{
    public:
    int tall;
    int weight;
    int num;

    myclass(){};
    myclass(int num,int tall, int weight){
        this->num=num;
        this->tall=tall;
        this->weight=weight;
    }

    int gettall(){return tall;}
    int getnum(){return num;}
    int getweight(){return weight;}

};

bool operat (myclass &a, myclass &b){
    if(a.tall!=b.tall){
        return a.tall<b.tall;
    }
    else{
        return a.weight>b.weight;
    }
} 

int main() {
    int n;
    cin>>n;
    vector<myclass> vec;

    for(int i=0;i<n;i++){
        int tall,weight;
        cin>>tall>>weight;
        vec.push_back(myclass(i+1,tall,weight));
    }

    sort(vec.begin(),vec.end(),operat);

    for(myclass & k : vec){
        cout<<k.gettall()<<" "<<k.getweight()<<" "<<k.getnum()<<"\n";
    }
    return 0;
}