#include <iostream>
using namespace std;

bool onjunsu(int n){
    if(n%2==0){
        return false;
    }

    else if(n%10==5){
        return false;
    }
    else if(n%3==0 && n%9!=0){
        return false;
    }
    return true;
}
int main() {
    int a,b;
    cin>>a>>b;

    int cnt=0;
    for(int i=a;i<b+1;i++){
        if(onjunsu(i)){
            cnt++;
        }
    }

    cout<<cnt;
    return 0;
}