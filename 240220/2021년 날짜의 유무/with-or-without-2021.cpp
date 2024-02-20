#include <iostream>

using namespace std;

bool there_is(int m,int d){

    if(m==1 || m==3 || m==5 ||m==7 ||m==8||m==10||m==12){
        if(d>0&&d<32){
            return true;
        }
        else{
            return false;
        }
    }

    else if(m==4 || m==6|| m==9||m==11){
        if(d>0&&d<31){
            return true;
        }
        else{
            return false;
        }
    }

    else if(m==2){
        if(d>0&&d<29){
            return true;
        }
        else{
            return false;
        }
    }

    
        return false;
    
}

int main() {
    int m,d;
    cin>>m>>d;

    if(there_is(m,d)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}