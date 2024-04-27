#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class myclass {
    public:
    int tall;
    int weight;
    int num;
    
    myclass(){}
    myclass(int tall, int weight,int num){
        this->tall=tall;
        this->weight=weight;
        this->num=num;
    }

    int gettall(){return tall;}
    int getweight(){return weight;}
    int getnum(){return num;}

};

bool compare(myclass &a, myclass &b){
    if(a.tall!=b.tall){
        return a.tall>b.tall;
    }
    else if(a.weight!=b.weight){
        return a.weight>b.weight;
    }
    else{
        return a.num<b.num;
    }
}

    
    int main() {
        int n;
        cin>>n;
        vector<myclass> vec;

        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            vec.push_back(myclass(a,b,i+1));
        }

        sort(vec.begin(),vec.end(), compare);

        for(myclass & mc: vec){
            cout<<mc.gettall()<<" "<<mc.getweight()<<" "<<mc.getnum()<<"\n";
        }


    return 0;
    }