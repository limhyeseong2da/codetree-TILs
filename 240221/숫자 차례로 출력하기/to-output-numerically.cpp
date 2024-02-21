#include <iostream>

using namespace std;

void fun1(int n){
    if(n==0){
        return;
    }

    else{
        fun1(n-1);
        cout<<n<<" ";
    }
}

void fun2 (int n){
    if(n==0){
        return;
    }
    else{
        cout<<n<<" ";
        fun2(n-1);
    }
}

int main() {
    int n;
    cin>>n;

    fun1(n);
    cout<<"\n";
    fun2(n);
    return 0;
}