#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<int> arr;
    vector<int> arr1;
    int start_num=1;
    int start_numb=1;
    arr.push_back(0);
    arr1.push_back(0);

    for(int i=0;i<n;i++){
        int t;
        char ch;
        cin>>ch>>t;

        if(ch=='R'){
            for(int j=1;j<t+1;j++){
                arr.push_back(arr.back()+1);
                start_num++;
            }
           
        }

        if(ch=='L'){
            for(int j=1;j<t+1;j++){
                arr.push_back(arr.back()-1);
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
                arr1.push_back(arr1.back()+1);
                start_numb++;
            }
           
        }

        if(ch=='L'){
            for(int j=1;j<t+1;j++){
                arr1.push_back(arr1.back()-1);
                start_numb++;
            }
        }
    }
    int ans=-1;
    int check=min(arr.size(),arr1.size());

    for(int i=1;i<check;i++){
        if(arr[i]==arr1[i]){
            ans=i;
            break;
        }
    }

    cout<<ans;
    return 0;
}