#include <iostream>
using namespace std;

bool is(int n){
    if(n%4==0){
        if(n%100==0){
            if(n%400==0){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return true;
        }
    }

    return false;
}

int main() {
    int y;
    cin>>y;

    if(is(y)){
        cout<<"true";
    }
    else{
        cout<<"false";
    };


}