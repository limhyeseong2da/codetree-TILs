#include <iostream>

using namespace std;

void fun(int &a, int &b){
    if(a-b>0){
        a=a*2;
        b=b+10;
    }
    else{
        b=b*2;
        a=a+10;
    }
}


int main() {
    int a,b;
    cin>>a>>b;
    fun(a,b);

    cout<<a<<" "<<b;

    return 0;
}