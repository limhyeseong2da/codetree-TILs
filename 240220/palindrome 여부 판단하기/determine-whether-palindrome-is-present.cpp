#include <iostream>
using namespace std;
#include<string>

int n; 

bool palindrome(string arr) {
    int t = n;

    for (int i = 0;i < n;i++) {
        if (arr[i] != arr[t - 1]) {
            return false;
        }

        t--;

    }

    return true;

    

}



int main() {
    string str;
    cin >> str;
    n = str.size();

    if (palindrome(str)) {

        cout << "Yes";

    }
    else {
        cout << "No";
    }

    return 0;
}