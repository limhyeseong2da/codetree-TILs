#include <iostream>
#include<vector>
#include <string>
using namespace std;

bool fun1(int n) {
    string st = to_string(n);
    for (int i = 0;i < st.size();i++) {
        if (st[i] == '3' || st[i] == '6' || st[i] == '9') {
            return true;
        }
    }
return false;

}

int fun(int a, int b, int c) {
    for (int i = a;i < b + 1;i++) {
        if ((i%3==0)||fun1(i)){
            c++;
        }
    }

    return c;
}


int main() {
    int a, b;
    cin >> a >> b;
    int res = 0;
    cout<<fun(a, b, res);
    

    
}