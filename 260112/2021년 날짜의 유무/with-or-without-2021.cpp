#include <iostream>
#include <unordered_set>

using namespace std;

int M, D;
unordered_set<int> Months30 = {4,6,9,11};
unordered_set<int> Months31 = {1,3,5,7,8,10,12};

bool ExistDate() {
    if (M < 1 || M > 12) return false;
    else if (Months30.count(M)) return (D >= 1 && D <= 30);
    else if (Months31.count(M)) return (D >= 1 && D <= 31);
    else return (D >= 1 && D <= 28);
    
    
    return false;
}

int main() {
    cin >> M >> D;

    if (ExistDate()) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
