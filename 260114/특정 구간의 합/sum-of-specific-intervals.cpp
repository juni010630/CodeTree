#include <iostream>

using namespace std;

int n, m;
int arr[101];

int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2;
        
        int sum{};
        for (int j=a1; j<=a2; j++) sum += arr[j];
        cout << sum << endl;
    }


    return 0;
}
