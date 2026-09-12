#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> cir;
    int N,K; cin >> N >> K;
    
    for (int i=1; i<=N; i++) {
        cir.push(i);
    }
    
    while (!cir.empty()) {
        int tmp = K;
        tmp--;
        while(tmp--) {
            cir.push(cir.front());
            cir.pop();
        }
        cout << cir.front() << " ";
        cir.pop();
    }
    
    
    
    return 0;
}
