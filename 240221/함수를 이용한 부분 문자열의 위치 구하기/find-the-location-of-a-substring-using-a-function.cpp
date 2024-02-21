#include <iostream>
#include <string>
using namespace std;



int fur(string a, string b){
    int n=a.size();
    int m=b.size();

    if(n<m){
        return -1;
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
            return i;
        }
        
    }

    return -1;

}



int main() {
    string str;
    string str1;
    cin>>str;
    cin>>str1;

    cout<<fur(str,str1) ;   




    return 0;
}