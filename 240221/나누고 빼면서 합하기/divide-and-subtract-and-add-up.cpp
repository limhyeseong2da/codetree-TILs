#include <iostream>

using namespace std;

int arr[101];
int cnt;

int getAnswer(){
    int return_value=0;
    while(cnt){

        return_value+=arr[cnt];

        if(cnt%2==0){
            cnt/=2;
        }

        else{
            cnt--;
        }

        
        
    }

return return_value;
}


int main(){
    int n,m;
    cin>>n>>m;

    for(int i=1;i<n+1;i++){
        cin>>arr[i];
    }

    cnt=m;

    cout<<getAnswer();
}