#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isComplete(string s, stack<char> arr) {
    for (int i=0; i<s.size(); i++) {
        if (s[i] == '(') arr.push(s[i]);
        else if (s[i] == ')' && arr.empty()) return false;
        else arr.pop();
    }
    if (arr.empty()) return true;
    else return false;
}

int main() {
    stack<char> arr;
    string s; cin >> s;
    
    isComplete(s, arr) ? cout << "Yes" : cout << "No";
    
}
