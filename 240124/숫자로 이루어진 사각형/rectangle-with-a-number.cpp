#include <iostream>
using namespace std;

void print(int n){
    int k=1;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
             if(k>9){
                k=1;
            }
            cout<<k<<" ";
            k++;
           
        }
        cout<<"\n";
    }
}
int main() {
    int N;
    cin>>N;
    print(N);
    return 0;
}