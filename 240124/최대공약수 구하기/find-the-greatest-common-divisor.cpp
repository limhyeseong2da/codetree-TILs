#include <iostream>
using namespace std;

void print(int a,int b){

    if(a>b){
        int temp=a;
        a=b;
        b=temp;

    }

    

    int ans=1;
for(int i=1;i<a+1;i++){
if(a%i==0&&b%i==0){
ans=i;
}


}
cout<<ans;

}
int main() {
    int n,m;
    cin>>n>>m;
    print(n,m);
    return 0;
}