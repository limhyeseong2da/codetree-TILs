#include <iostream>
using namespace std;


int check(int month){
    switch(month){
    case 1:
    return 0;
    case 2:
    return 31;
    case 3:
    return 31+28;
    case 4:
    return 31+28+31;
    case 5:
    return 31+28+31+30;
    case 6:
    return 31+28+31+30+31;
    case 7:
    return 31+28+31+30+31+30;
    case 8:
    return 31+28+31+30+31+30+31;
    case 9:
    return 31+28+31+30+31+30+31+31;
    case 10:
    return 31+28+31+30+31+30+31+31+30;
    case 11:
    return 31+28+31+30+31+30+31+31+30+31;
    case 12:
    return 31+28+31+30+31+30+31+31+30+31+30;
    default:
    return 0;
}}


int main() {
    
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans;
    ans= check(c)+d-(check(a)+b)+1;
    cout<<ans;

    
    return 0;
}