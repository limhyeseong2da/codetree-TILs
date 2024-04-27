#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class myclass{
    public:
    int x,y,num;
    myclass(){}
    myclass(int x,int y, int num){
        this->x=x;
        this->y=y;
        this->num=num;
    }

    int getx(){return x;}
    int gety(){return y;}
    int getnum(){return num;}
};

bool compare(myclass &a ,myclass &b){
    int disa=abs(a.getx())+abs(a.gety());
    int disb=abs(b.getx())+abs(b.gety());

    if(disa==disb){
        return a.getnum()<b.getnum();
    }
    else{
        return disa<disb;
    }
}

int main() {
    int n;
    cin>>n;
    vector <myclass> vec;

    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        vec.push_back(myclass(x,y,i+1));
    }

    sort(vec.begin(),vec.end(),compare);

    for(myclass & mc : vec){
        cout<<mc.getnum()<<"\n";
    }

    return 0;
}