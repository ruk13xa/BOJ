#include <iostream>

using namespace std;

int main() {
    double a, b;

    cin >> a >> b;
    cout.precision(9); // 소수점 9번째 자리까지 출력이 가능케 표현해준다.
    cout << fixed; // 부동 소수점 값을 고정 소수점으로 변경해준다.
    cout << a / b;

    return 0;
}