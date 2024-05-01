#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n;
    cin>>n;
    vector <int> vec(n,0);

    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    int cnt=1;
    int max=0;

    for(int i=1;i<n;i++){
        if(vec[i-1]<vec[i]){
            cnt++;
        }
        else{
            if(max<cnt){
                max=cnt;
            }
                cnt=1;
        }
    }

    if(max<cnt){
        max=cnt;
    }

    cout<<max;
        return 0;
}