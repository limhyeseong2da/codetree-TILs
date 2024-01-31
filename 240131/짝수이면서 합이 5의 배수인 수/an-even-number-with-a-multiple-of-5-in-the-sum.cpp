#include <iostream>

using namespace std;

int func(int n){
    if(n%2!=0){
        return 0;
    }

    else{
        
        int sum=0;
        sum=n/10+n%10;

        if(sum%5==0){
            return 1;
        }

        else{
            return 0;
        }
        
    }
}

int main() {
    int n;
    cin>>n;
    if(func(n)==1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}