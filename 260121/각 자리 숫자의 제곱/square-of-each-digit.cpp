#include <iostream>
#include <cmath>

using namespace std;

int N;

int func(int n) {
    if (n % 10 == 0) return 0;
    return pow(n%10,2) + func(n/10);
}

int main() {
    cin >> N;

    cout << func(N) << endl;

    return 0;
}
