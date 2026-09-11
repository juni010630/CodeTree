#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    a -= 11;
    b -= 11;
    c -= 11;
    
    (((a*24)+b)*60+c < 0) ? cout << -1 : cout << ((a*24)+b)*60+c;
    return 0;
}
