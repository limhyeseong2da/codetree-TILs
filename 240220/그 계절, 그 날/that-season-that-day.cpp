#include <iostream>

using namespace std;

bool younneon(int y) {
    if (y % 4 == 0) {
        if (y % 100 == 0) {
            if (y % 400 == 0) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return true;
        }
    }
    else {
        return false;
    }
}

bool subject(int m, int d) {
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        if (d < 32) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        if (d < 31) {
            return true;
        }
        else {
            return false;
        }
    }
}


void what_is(int y, int m, int d) {
    if (younneon(y)) {
        if (m == 2) {
            if (d < 30) {
                cout << "Winter";
            }
            else {
                cout << "-1";
            }
        }

        if (subject(m, d)) {
            if (m == 1 || m == 12) {
                cout << "Winter";
            }
            if (m == 3 || m == 4 || m == 5) {
                cout << "Spring";
            }
            if (m == 6 || m == 7 || m == 8) {
                cout << "Summer";
            }
            if (m == 9 || m == 10 || m == 11) {
                cout << "Fall";
            }
        }

        if (!subject(m, d)) {
            cout << "-1";
        }



    }

    else {
        if (m == 2) {
            if (d < 29) {
                cout << "Winter";
            }
            else {
                cout << "-1";
            }
        }
        if (subject(m, d)) {
            if (m == 1 || m == 12) {
                cout << "Winter";
            }
            if (m == 3 || m == 4 || m == 5) {
                cout << "Spring";
            }
            if (m == 6 || m == 7 || m == 8) {
                cout << "Summer";
            }
            if (m == 9 || m == 10 || m == 11) {
                cout << "Fall";
            }
        }

        if (!subject(m, d)) {
            cout << "-1";
        }
    }

}





int main() {
    int y, m, d;
    cin >> y >> m >> d;

    what_is(y, m, d);
    return 0;
}