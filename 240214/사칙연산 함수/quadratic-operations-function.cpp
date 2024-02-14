#include <iostream>
using namespace std;

int add(int n, int m) {
    return n + m;
}

int sub(int n, int m) {
    return n - m;
}

int mul(int n, int m) {
    return n * m;
}

int dev(int n, int m) {
    return n / m;
}
int main() {
    int a, c;
    char o;

    cin >> a >> o >> c;


        switch (o) {
        case '+':
            cout <<a<<" + "<<c<<" = "<<add(a, c);
            break;
        case '-':
            cout <<a<<" - "<<c<<" = "<<sub(a, c);
            break;
        case '*':
            cout <<a<<" * "<<c<<" = "<< mul(a, c);
            break;
        case '/':
            cout <<a<<" / "<<c<<" = "<< dev(a, c);
            break;
        default:
            cout << "False";
        }
    
}