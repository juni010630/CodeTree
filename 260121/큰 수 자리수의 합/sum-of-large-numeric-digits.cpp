#include <iostream>

using namespace std;


int a,b,c;


int func(int n) {
    if (n == 0) return 0;
    
    return (n%10) + func(n/10);
}

int wrapper() {
    return func(a*b*c);
}

int main() {
    
    cin >> a >> b >> c;
    cout << wrapper() << endl;
    
    return 0;
}
