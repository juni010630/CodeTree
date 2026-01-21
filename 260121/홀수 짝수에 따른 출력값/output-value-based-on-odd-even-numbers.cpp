#include <iostream>

using namespace std;

int N;

int func(int n) {
    if (n == 2) return 2;
    else if (n == 1) return 1;
    
    return func(n-2) + n;
    
}

int main() {
    cin >> N;

    cout << func(N) << endl;
    return 0;
}
