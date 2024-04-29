#include <iostream>
#include <vector>
using namespace std;


vector<int> daysInMonth = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
vector<string> daysOfWeek = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int countDays(int month, int day) {
    int totalDays = 0;
    for (int i = 1; i < month; i++) {
        totalDays += daysInMonth[i];
    }
    totalDays += day;
    return totalDays;
}


int countSpecificDay(int start, int end, int dayOfWeek) {
    
    int firstDay = (dayOfWeek - (start % 7) + 7) % 7;
    if (firstDay == 0) firstDay = 7;

    
    int firstOccurrence = start + firstDay;
    if (firstOccurrence > end) return 0;
    return (end - firstOccurrence) / 7 + 1;
}

int main() {
    int m1, d1, m2, d2;
    string targetDay;

    
    cin >> m1 >> d1 >> m2 >> d2 >> targetDay;

    int start = countDays(m1, d1);
    int end = countDays(m2, d2);

    int dayOfWeekIndex = 0;
    for (int i = 0; i < 7; i++) {
        if (daysOfWeek[i] == targetDay) {
            dayOfWeekIndex = i;
            break;
        }
    }

    
    int count = countSpecificDay(start, end, dayOfWeekIndex + 1);

    cout << count << endl;

    return 0;
}