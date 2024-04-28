#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;  // 사용자 입력: 11월 a일 b시 c분
    
    // 11월 11일 11시 11분과의 차이를 계산
    int days_diff = a - 11;   // 일수 차이
    int minutes_diff = days_diff * 24 * 60;  // 일수 차이를 분으로 환산
    
    // 시간 차이와 분 차이 추가 계산
    minutes_diff += (b - 11) * 60;
    minutes_diff += (c - 11);
    
    // 결과 출력
    cout << minutes_diff << endl;
    
    return 0;
}