#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> arr;
    int n; cin >> n;

    for (int i=1; i<=n; i++) arr.push_back(i);

    while (arr.size() != 1) {
        arr.pop_front();
        arr.push_back(arr.front());
        arr.pop_front();
    }
    
    cout << arr[0];
    return 0;
}
