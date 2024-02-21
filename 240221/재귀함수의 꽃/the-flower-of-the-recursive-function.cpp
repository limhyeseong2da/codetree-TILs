#include <iostream>

using namespace std;


void fun(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    
    fun(n-1);
    cout<<n<<" ";
}

int main() {
    int n;
    cin>>n;
    fun(n);
    return 0;
}