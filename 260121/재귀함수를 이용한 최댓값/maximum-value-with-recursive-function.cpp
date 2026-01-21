#include <iostream>

using namespace std;

int n;
int arr[100];

int func(int N) {
    if (N == 0) return arr[N];
    
    int k = func(N-1);
    if (arr[N] > k) return arr[N];
    return k;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << func(n) << endl;

    return 0;
}
