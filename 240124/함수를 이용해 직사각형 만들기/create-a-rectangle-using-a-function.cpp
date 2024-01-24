#include <iostream>
using namespace std;

void print(int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<1;
        }
        cout<<"\n";
    }
}

int main() {
    int N,M;
    cin>>N>>M;
    print(N,M);
}