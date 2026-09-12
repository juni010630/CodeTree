#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    int T; cin >> T;
    while (T--) {
        string s; cin >> s;
        if (s == "push_back") {
            int tmp; cin >> tmp;
            dq.push_back(tmp);
        }
        else if (s == "push_front") {
            int tmp; cin >> tmp;
            dq.push_front(tmp);
        }
        else if (s == "pop_front") {
            cout << dq.front() << endl;
            dq.pop_front();
        }
        else if (s == "pop_back") {
            cout << dq.back() << endl;
            dq.pop_back();
        }
        else if (s == "front") cout << dq.front() << endl;
        else if (s == "back") cout << dq.back() << endl;
        else if (s == "empty") cout << dq.empty() << endl;
        else if (s == "size") cout << dq.size() << endl;
    }
    
    return 0;
}
