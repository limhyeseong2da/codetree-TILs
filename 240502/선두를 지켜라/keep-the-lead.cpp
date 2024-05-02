#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        int v,t;
        cin>>v>>t;
        arr[i]=v*t;
    }
    int *arr1=new int[m];
    for(int i=0;i<m;i++){
        int v,t;
        cin>>v>>t;
        arr1[i]=v*t;
    }

    int k=min(n,m);

    int *dif=new int[k];

    for(int i=0;i<k;i++){
        dif[i]=arr[i]-arr1[i];
    }
    int cnt=0;

    for(int i=0;i<k-1;i++){
        if(dif[i]*dif[i+1]<0){
            cnt++;
        }
    }

    cout<<cnt;

    return 0;
}