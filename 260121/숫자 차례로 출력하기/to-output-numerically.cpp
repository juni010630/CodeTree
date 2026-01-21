#include <iostream>

using namespace std;

int N;
int i{1};

void printUpper(int n) {
    if (n == 0) {
        cout << endl;
        return;
    }
    cout << i << " ";
    i++;
    printUpper(n-1);
}

void printLow(int n) {
    if (n == 0) {
        cout << endl;
        return;
    }
    cout << n << " ";
    printLow(n-1);
}

int main() {
    cin >> N;

    printUpper(N);
    printLow(N);

    return 0;
}
