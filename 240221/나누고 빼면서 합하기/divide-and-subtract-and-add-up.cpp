#include <iostream>

using namespace std;

int fun(int* arr, int n, int m) {
    int sum = 0;
    if (m % 2 == 0) {
        sum += arr[m - 1];
        for (int i = m/2-1;i > -1;i--) {
            sum += arr[i];
            
        }

        return sum;
    }

    else {
        for (int i = m;i > 0;i--) {
            sum += arr[i - 1];
        }

        return sum;
    }
}

int main() {
    int m, n;
    cin >> n >> m;
    int* arr = new int[m];
    for (int i = 0;i < m;i++) {
        cin >> arr[i];
    }

    cout << fun(arr, n, m);
    

    delete[] arr;
}