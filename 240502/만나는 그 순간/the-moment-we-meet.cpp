#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arr[1000000]={0};
    int arr1[1000000]={0};
    int start_num=1;
    int start_numb=1;

    for(int i=0;i<n;i++){
        int t;
        char ch;
        cin>>ch>>t;
      
        if(ch=='R'){
            for(int j=1;j<t+1;j++){
                arr[start_num]=arr[start_num-1]+1;
                start_num++;
            }
           
        }

        if(ch=='L'){
            for(int j=1;j<t+1;j++){
                arr[start_num]=arr[start_num-1]-1;
                start_num++;
            }
        }
    }

     for(int i=0;i<m;i++){
        int t;
        char ch;
        cin>>ch>>t;


        if(ch=='R'){
            for(int j=1;j<t+1;j++){
                arr1[start_numb]=arr1[start_numb-1]+1;
                start_numb++;
            }
           
        }

        if(ch=='L'){
            for(int j=1;j<t+1;j++){
                arr1[start_numb]=arr1[start_numb-1]-1;
                start_numb++;
            }
        }
    }
    int ans=-1;

    for(int i=1;i<1000000;i++){
        if(arr[i]==arr1[i]){
            ans=i;
            break;
        }
    }

    cout<<ans;
    return 0;
}