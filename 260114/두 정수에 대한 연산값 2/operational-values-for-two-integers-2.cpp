#include <iostream>

using namespace std;

int a, b;

void func(int* M, int* m) {
    *M *= 2;
    *m += 10;
}

int main() {
    cin >> a >> b;
    
    (a>=b) ? func(&a,&b) : func(&b,&a);
    
    cout << a << " " << b << endl;

    return 0;
}
