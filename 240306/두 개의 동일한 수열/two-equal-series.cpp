#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;

    vector<int> a(n, 0);
    vector<int> b(n, 0);

    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }

    for (int i = 0;i < n;i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());

    sort(b.begin(), b.end());

    bool ans=true;

    for (int i = 0;i < n;i++) {
        if (a[i] != b[i]) {
            ans = false;
            break;
        }
        else {
            ans = true;
        }
    }

    if (ans) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }



    return 0;
}