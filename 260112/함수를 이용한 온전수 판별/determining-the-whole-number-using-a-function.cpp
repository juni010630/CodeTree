#include <iostream>

using namespace std;

int a, b;

bool IsComplete(int i) {
    if (i%2==0 || i%10==5 || (i%3==0 && i%9!=0)) return false;
    return true;
}

int main() {
    cin >> a >> b;

    int cnt{};
    for (int i=a; i<=b; i++) {
        if (IsComplete(i)) cnt++;
    }

    cout << cnt << endl;

    return 0;
}