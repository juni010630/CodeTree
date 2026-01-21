#include <iostream>

using namespace std;

int N;
int cnt{};

int func(int n) {
    if (n == 1) return 1;
    cnt++;
    return (n%2==0) ? func(n/2) : func(n/3);
}



int main() {
    cin >> N;
    func(N);
    cout << cnt << endl;
    

    return 0;
}
