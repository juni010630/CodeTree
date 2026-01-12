#include <iostream>

using namespace std;

int a, b;

int power(int a, int b) {
    int ret{1};
    while(b--) ret *= a;
    return ret;
}

int main() {
    cin >> a >> b;

    cout << power(a,b) << endl;
    return 0;
}