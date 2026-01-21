#include <iostream>

using namespace std;

int N;

void func(int n) {
    if (n == 0) return;
    cout << n << " ";
    func(n-1);
    cout << n << " ";
}

int main() {
    cin >> N;
    
    func(N);
    return 0;
}
