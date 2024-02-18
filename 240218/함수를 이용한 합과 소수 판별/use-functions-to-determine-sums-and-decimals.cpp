#include <iostream>
using namespace std;

bool sosu(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }

    }

    return true;
}

int sum(int n){

    if(n/10>0){
        return (n%10+n/10);
    }
    else{
        return n;
    }
    
}
int main() {
    int a,b;
    cin>>a>>b;

    int cnt=0;
    for(int i=a;i<b+1;i++){

        
        if(sosu(i)&&(sum(i)%2==0))
        {
            cnt++;
        }
    }

    cout<<cnt;

    return 0;
}