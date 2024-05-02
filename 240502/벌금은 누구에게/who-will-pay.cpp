#include <iostream>
using namespace std;

int main() {
    int n,m,k;
    cin>>n>>m>>k;
  
    int *arr1=new int[m];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }

    int *check=new int[n+1] ();

int ans=-1;

    for(int i=0;i<m;i++){
        check[arr1[i]]++;
        if(check[arr1[i]]==k){
            ans=arr1[i];
            break;
        }
    }

    cout<<ans;


}