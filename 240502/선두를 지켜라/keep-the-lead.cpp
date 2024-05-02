#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<int> vec;
    int lead=0;
    int time=0;
    int dis=0;
    int cnt=0;

    for(int i=0;i<n;i++){
        int v,t;
        cin>>v>>t;
        
        for(int j=0;j<t;j++){
            vec.push_back(dis+v*j);
        }
        dis+=v*t;
        time+=t;
    }
    
    vector<int> vec1;
    int disb=0;

     for(int i=0;i<m;i++){
        int v,t;
        cin>>v>>t;
        
        for(int j=0;j<t;j++){
            vec1.push_back(disb+v*j);
        }
        disb+=v*t;
    }

    for(int i=0;i<time;i++){

        if(lead==0){
            if(vec[i]>vec1[i]){
                lead=1;
            }
            else if(vec[i]<vec1[i]){
                lead=-1;
            }
            else{
                lead=0;
            }
        }
        if((vec[i]<vec1[i])&&lead>0){
            cnt++;
            lead=-1;
        }
        else if((vec[i]>vec1[i])&&lead<0){
            cnt++;
            lead=1;
        }
    }


    cout<<cnt;



    

    return 0;
}