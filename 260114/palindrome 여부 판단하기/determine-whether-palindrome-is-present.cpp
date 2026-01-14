#include <iostream>
#include <string>

using namespace std;

string A;

bool IsPal() {
    int i{};
    size_t len = A.length() - 1;
    while (A[i] != '\0') {
        if (A[i] != A[len-i]) return false;
        i++;
    }
    return true;
}

int main() {
    cin >> A;

    if (IsPal()) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
