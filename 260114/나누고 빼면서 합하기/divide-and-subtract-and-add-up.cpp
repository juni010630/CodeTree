#include <iostream>

using namespace std;

int n, m;
int A[100];

int func() {
    int sum{};
    while (m != 1) {
        if (m % 2 == 0) m /= 2;
        else m -= 1;
        
        sum += A[m];
    }
    
    sum += A[1];
    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    
    
    cout << func() << endl;
    return 0;
}
