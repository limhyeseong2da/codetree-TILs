#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string str;
    string str1;

    cin >> str >> str1;
    sort(str.begin(), str.end());
    sort(str1.begin(), str1.end());


    if (str.size() != str1.size()) {
        cout << "No";
    }
    else {

        bool ans=true; 
        for (int i = 0;i < str.size();i++) {
            if (str[i] != str1[i]) {
                ans = false;
                break;
            }
        }
        if (ans) {
            cout << "Yes";

        }
        else {
            cout << "No";
        }

    }


    


    return 0;
}