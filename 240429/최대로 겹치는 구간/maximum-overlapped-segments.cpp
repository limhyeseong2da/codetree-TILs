#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[]={0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        for(int j=a;j<b;j++){
            arr[j]++;
        }
    }

    int max=arr[1];
    for(int i=1;i<10;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }

    cout<<max;
    return 0;
}