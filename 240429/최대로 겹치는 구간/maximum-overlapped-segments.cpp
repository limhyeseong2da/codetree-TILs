#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[200]={0};
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        a=a+100;
        b=b+100;
        for(int j=a;j<b;j++){
            arr[j]++;
        }
    }

    int max=arr[0];
    for(int i=0;i<200;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }

    cout<<max;
    return 0;
}