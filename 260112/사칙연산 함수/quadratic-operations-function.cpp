#include <iostream>

using namespace std;

int a;
int c;
char o;

void calc(int a,int b, char c) {
    switch (c) {
        case '+':
            cout << a << " + " << b << " = " << a+b;
            break;
        case '*':
            cout << a << " * " << b << " = " << a*b;
            break;
        case '-':
            cout << a << " - " << b << " = " << a-b;
            break;
        case '/':
            cout << a << " / " << b << " = " << a/b;
            break;
        default:
            cout << "False" << endl;

    }
}

int main() {
    cin >> a >> o >> c;

    calc(a,c,o);

    return 0;
}