#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(2*n, 0);
    for (int i = 0;i < 2*n;i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    cout << vec[2*n - 1] + vec[n - 1];



    return 0;
}