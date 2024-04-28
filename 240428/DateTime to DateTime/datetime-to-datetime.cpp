#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a>10){
        cout<<(24*(a-11)*60+b*60+c)-(11*60+11);}
    else{
         cout<<11*60+11-(24*(11-a)*60+b*60+c);
    }
    return 0;
}