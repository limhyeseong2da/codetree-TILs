#include <iostream>

using namespace std;

int jegob(int n,int m){
    int ans=1;
    for(int i=0;i<m;i++){
        ans*=n;
    }

    return ans;
}

int main() {
    int a,b;
    cin>>a>>b;
    cout<< jegob(a,b);
    return 0;
}