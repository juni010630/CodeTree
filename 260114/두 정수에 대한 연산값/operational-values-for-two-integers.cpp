#include <iostream>

using namespace std;

int a, b;

void func(int* m, int* M) {
    *M += 25;
    *m *= 2;
}

int main() {
    cin >> a >> b;
    
    if (a >= b) func(&b,&a);
    else func(&a,&b);
    
    cout << a << " " << b << endl;
    

    return 0;
}
