#include <iostream>
using namespace std;

int fun(int n,int m,int k){
    int min=n;

    if(min>m){
        min=m;
    }

    if(min>k){
        min=k;
    }

    return min;
}

int main() {

    int a,b,c;
    cin>>a>>b>>c;

    cout<<fun(a,b,c);

    
    return 0;
}