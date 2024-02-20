#include <iostream>
#include <string>

using namespace std;

bool judege(string str){
    int n=str.size();

    for(int i=0;i<n;i++){
        for(int j=i;i<n;j++){
            if(str[i]==str[j]){
                return true;
            }
        }
    }

    return false;

}

int main() {
    string str;
    cin>>str;

    if(judege(str)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}