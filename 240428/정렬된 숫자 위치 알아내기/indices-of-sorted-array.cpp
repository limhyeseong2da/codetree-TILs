#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;

    vector<int> vec(n+1,0);

    for(int i=1;i<n+1;i++){
        int num;
        cin>>num;
        vec[i]=num;
    }
    vector <int> vec1(n+1,0);

    for(int i=1;i<n+1;i++){
        vec1[i]=vec[i];
    }

    sort(vec1.begin(),vec1.end());

    vector<int> vec2(n+1,0);
    vector<bool> rank(n+1,false);

    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            if(vec[i]==vec1[j]&&!rank[j]){
                vec2[i]=j;  
                rank[j]=true;
                break;
            }
        }
    }

    for(int i=1;i<n+1;i++){
        cout<<vec2[i]<<" ";
    }

    return 0;
}