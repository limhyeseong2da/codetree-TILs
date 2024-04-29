#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[20001] ={0};
    int start=10000;
    for(int i=0;i<n;i++){
        int a;
        char b;
        cin>>a>>b;
         
        if(b=='R'){
            for(int j=0;j<a;j++){
                arr[start+j]++;
            }
            start+=a;
        }
        if(b=='L'){
            for(int k=0;k<a;k++){
                arr[start-k]++;
            }
            start-=a;
        }
    
    }

    int cnt=0;
    for(int i=0;i<20001;i++){
        if(arr[i]>1){
            cnt++;
        }
    }

    cout<<cnt;
    return 0;
}