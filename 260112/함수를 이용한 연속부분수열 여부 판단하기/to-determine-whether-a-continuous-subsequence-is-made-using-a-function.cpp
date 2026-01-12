#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool IsCon(int* a, int* b, int k) {
    for (int i=0; i < n2; i++) {
        if (a[k+i] != b[i]) return false;
    }
    
    return true;
}

bool WeatherCon(int* a, int* b) {
    for (int i = 0; i<n1; i++) if (a[i] == b[0] && IsCon(a,b,i)) return true;
    return false;
}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    if (WeatherCon(a, b)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
