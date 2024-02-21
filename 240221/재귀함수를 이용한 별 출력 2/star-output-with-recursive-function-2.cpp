#include <iostream>

using namespace std;

void fun(int n){
    if(n==0){
        return;
    }

    for(int i=0;i<n;i++){
        cout<<"* ";
    }
    cout<<"\n";
    fun(n-1);
      for(int i=0;i<n;i++){
        cout<<"* ";
    }
    cout<<"\n";

}

int main() {
    int n;
    cin>>n;
    fun(n);
    
    return 0;
}