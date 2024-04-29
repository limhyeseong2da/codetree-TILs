#include <iostream>

using namespace std;


int main() {
    int arr[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    string date[]=
    {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    int m1,m2,d1,d2;
    cin>>m1>>d1>>m2>>d2;
    if(m1<m2){
        int ansm2=0;
        for(int i=1;i<m2;i++){
            ansm2+=arr[i];
        }
        int ansm1=0;
        for(int i=1;i<m1;i++){
            ansm1+=arr[i];
        }

        int dif1=0;
        dif1=((ansm2+d2)-(ansm1+d1))%7;
        string ans1;
        ans1=date[dif1];
        cout<<ans1;
    }

    if(m1>m2){
        int ans_m1=0;
        for(int i=1;i<m1;i++){
            ans_m1+=arr[i];
        }
        int ans_m2=0;
        for(int i=1;i<m2;i++){
            ans_m2+=arr[i];
        }
        int dif2=0;
        dif2=((ans_m1+d1)-(ans_m2+d2))%7;
        string ans2;
        ans2=date[7-dif2];
        cout<<ans2;
    }
    if(m1==m2){
        if(d1<d2){
            int dif3=(d2-d1)%7;
            cout<<date[dif3];
        }
        if(d1>d2){
            int dif4=(d1-d2)%7;
            cout<<date[7-dif4];
        }
    }
    return 0;
}