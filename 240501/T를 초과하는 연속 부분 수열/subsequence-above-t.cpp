#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,t;
    cin>>n>>t;

    vector <int> vec(n,0);

    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    int cnt=0;
    int max=0;
    for(int i=0;i<n;i++){
        
        if(vec[i]>t){
            cnt++;
        }

        else{
            if(max<cnt){
                max=cnt;
            }
            cnt=0;
        }
    }

    if(max<cnt){
        max=cnt;
    }

    cout<<max;
    return 0;
}