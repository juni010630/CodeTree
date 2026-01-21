#include <iostream>

using namespace std;

int N;

void func(int n) {
    if (n == 0) return;
    for (int i=0; i<n; i++) cout << "* ";
    cout << endl;
    
    func(n-1);
    
    for (int i=0; i<n; i++) cout << "* ";
    cout << endl;
    
}

int main() {
    cin >> N;
    func(N);
    
    return 0;
}
