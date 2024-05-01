#include <iostream>
#include <vector>
using namespace std;
int main() {
    int cnt=0;
    int n;
    cin>>n;

    vector<int> vec(n,0);
    vector <int> vec1(n,0);

    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vec[i]=num;
    }
    int sum=1;
    int maxcount=0;

    for(int i=1;i<n;i++){
        if(vec[i]==vec[i-1]){
            sum++;
        }
        else{
            if(maxcount<sum){
                maxcount=sum;
            }

            sum=1;
        }
    }

    if(sum>maxcount){
        maxcount=sum;
    }

    cout<<maxcount;
    return 0;
}