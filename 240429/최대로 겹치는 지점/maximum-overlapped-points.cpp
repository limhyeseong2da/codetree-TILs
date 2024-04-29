#include <iostream>
using namespace std;
int main() {
    int arr[101]={0};
    int n;
    cin>>n;

    for(int i=1;i<n+1;i++){
        int a,b;
        cin>>a>>b;
        for(int j=a;j<b+1;j++){
            arr[j]++;
        }
    }

    int max=arr[1];
    for(int i=1;i<101;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }

    cout<<max;
    return 0;
}