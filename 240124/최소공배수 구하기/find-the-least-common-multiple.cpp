#include <iostream>
using namespace std;

void print(int a,int b){
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
int ans1=1;
    for(int i=1;i<a+1;i++ ){
        if(b%i==0&&a%i==0){
            ans1=i;
        }
    }
    int ans2= a*b/ans1;
    cout<<ans2;
}

int main() {
    int n,m;
    cin>>n>>m;
    print(n,m);
    return 0;
}