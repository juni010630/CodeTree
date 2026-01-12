#include <iostream>

using namespace std;

int a, b;

bool IsPrime(int n) {
    for (int i=2; i<n; i++) {
        if (!(n%i)) return false;
    }
    return true;
}

bool IsSumEven(int n) {
    int sum{};
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return !(sum%2);
}

int main() {
    cin >> a >> b;

    int cnt{};
    while(a++ <= b) {
        if (IsPrime(a) && IsSumEven(a)) cnt++;
    }

    cout << cnt << endl;

    return 0;
}
