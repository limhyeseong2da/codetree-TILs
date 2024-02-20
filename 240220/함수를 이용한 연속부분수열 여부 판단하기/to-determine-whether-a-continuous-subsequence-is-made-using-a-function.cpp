#include <iostream>
#include <vector>

using namespace std;

bool correct(vector<int> &a,vector<int>&b,int n,int m){

    if(n<m){
        return false;
    }

    for(int i=0;i<n-m+1;i++){
        bool match=true;

        for(int j=0;j<m;j++){
            if(a[i+j]!=b[j]){
                match=false;
                break;
            }
        }

        if(match){
            return true;
        }
    }

    return false;
   

        

        

    
    
}


int main() {
    int n,m;

    cin>>n>>m;

    vector<int> a(n,0);
    vector<int> b(m,0);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    if(correct(a,b,n,m)){
        cout<<"Yes";
    }

    else{
        cout<<"No";
    }
    
    return 0;
}