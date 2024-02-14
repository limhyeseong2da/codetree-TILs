#include <iostream>
#include <vector>
using namespace std;

bool isprime(int n) {
    for (int i = 2;i < n;i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int a, b;
    cin >> a >> b;

    if(a==b){
        if(isprime(a)){
            cout<<a;
        }
        else{
            cout<<0;
        }

    }

    else{
        vector<int> vec;

    for (int i = a;i <= b;i++) {
        if (isprime(i)) {
            vec.push_back(i);
            
        }
    }


    int sum=0;

    for (int a : vec) {
        
        sum += a;
    }

    cout << sum;


    }
}