#include <iostream>
using namespace std;

int n;
int arr[50];

void swap(int *x){
    for(int i=0;i<n;i++){
        if(x[i]<0){
            x[i]=-x[i];
        }
    }

}
int main() {
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    swap(arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}