#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

string A;

bool IsDuplicatedChar(string s) {
    unordered_set<char> set;
    for (int i=0; i<A.length(); i++) set.insert(s[i]);
    
    if (set.size() >= 2) return true;
    return false;
}


int main() {
    cin >> A;

    if (IsDuplicatedChar(A)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
