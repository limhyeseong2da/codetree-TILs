#include <iostream>
using namespace std;

int arr[101];




int main() {
    int n,m;
    cin>>n>>m;

    for(int i=1;i<n+1;i++){
        cin>>arr[i];
    }

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        int sum=0;
        for(int j=a;j<b+1;j++){
            sum+=arr[j];
        }

        cout<<sum<<endl;
    }

    return 0;
}