#include <iostream>

using namespace std;

int N;
int sum{};

int func(int n) {
    if (n == 1) return 1;
    return n += func(n-1);
}

int main() {
    cin >> N;
    cout << func(N) << endl;



    return 0;
}
