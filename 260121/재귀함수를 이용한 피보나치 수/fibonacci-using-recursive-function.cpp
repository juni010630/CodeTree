#include <iostream>

using namespace std;

int N;

int fivo(int n) {
    if (n <= 2) {
        return 1;
    }
    return fivo(n-1)+fivo(n-2);
}

int main() {
    cin >> N;
    cout << fivo(N) << endl;
    
    

    return 0;
}
