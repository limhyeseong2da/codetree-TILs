#include <iostream>
using namespace std;


int fun(int n){
    if(n<10){
        return n*n;
    }
    else{
        return fun(n/10)+(n%10)*(n%10);
    }
}

int main() {
    int n;
    cin>>n;
    cout<<fun(n);
    return 0;
}