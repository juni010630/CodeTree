#include <iostream>

using namespace std;

int n;
int arr[100];

int func(int N) {
    if (N == 0) return arr[0];
    
    if (arr[N] > func(N-1)) return arr[N];
    return func(N-1);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << func(n) << endl;

    return 0;
}
