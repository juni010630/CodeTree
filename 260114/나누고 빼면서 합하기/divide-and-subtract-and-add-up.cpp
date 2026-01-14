#include <iostream>

using namespace std;

int n, m;
int A[101];

int func() {
    int sum = 0;
    while (true) {
        sum += A[m];
        if (m == 1) break;

        if (m % 2 == 0) m /= 2;
        else m -= 1;
    }
    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }
    
    cout << func() << endl;
    return 0;
}
