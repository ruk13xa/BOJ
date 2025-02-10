#include <iostream>

using namespace std;

int main() {
    int A, B, C, t;

    cin >> A >> B >> C;

    t = A * 60 + B + C;

    if(t >= 24 * 60) t -= 24 * 60;
    
    A = t / 60;
    B = t % 60;

    cout << A << " " << B;

    return 0;
}