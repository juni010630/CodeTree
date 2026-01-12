#include <iostream>

using namespace std;

int main() {
    int i{};
    cin >> i;

    cout << boolalpha << (!(i % 4) && ((i % 100) || !(i % 400))) << endl;

    return 0;
}
