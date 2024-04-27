#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class myclass{
    public:
    string a,b,c;
    myclass(){}
    myclass(string a,string b,string c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    string geta(){return a;}
    string getb(){return b;}
    string getc(){return c;}
};

bool operator< (myclass &a,myclass &b){
    return a.geta()<b.geta();
}

int main() {
    
    int n;
    cin>>n;
    vector <myclass> vec;


    for(int i=0;i<n;i++){
        string a,b,c;
        cin>>a>>b>>c;
        if(c=="Rain"){
         vec.push_back(myclass(a,b,c));
        }
    }

    sort(vec.begin(),vec.end());

    cout<<vec[0].geta()<<" "<<vec[0].getb()<<" "<<vec[0].getc();
    
    return 0;
}