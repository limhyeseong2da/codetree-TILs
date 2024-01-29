#include <iostream>
using namespace std;


int fun(int n){
    int res=0;
    for(int i=1;i<n+1;i++){
        res+=i;
    }

    res=res/10;

    return res;
}

int main() {
    int N;
    cin>>N;

    cout<<fun(N);

    return 0;
}