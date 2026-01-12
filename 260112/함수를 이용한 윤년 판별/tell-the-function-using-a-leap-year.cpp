#include <iostream>

using namespace std;

int y;

bool IsYear(int i) {
    return !(i % 4) && ((i % 100) || !(i % 400));
}

int main() {
    cin >> y;

    cout << boolalpha << IsYear(y) << endl;

    return 0;
}
