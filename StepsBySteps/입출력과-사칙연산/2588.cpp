#include <iostream>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;
    cout << n * (m % 10) << "\n" << n * (m % 100 - m % 10) / 10 << "\n" << n * (m - m % 100) / 100 << "\n" << n * m;

    return 0;
}