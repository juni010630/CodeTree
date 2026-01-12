#include <iostream>

using namespace std;

int Y, M, D;

bool IsLeapYear() {
    return (!(Y%4) && (Y%100)) || !(Y%400);
}

bool IsDate() {
    switch(M) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: return (D >= 1 && D <= 31);
        case 4: case 6:case 9:case 11: return (D >= 1 && D <= 30);
        case 2:
            if (IsLeapYear()) return (D >= 1 && D <= 29);
            else return (D >= 1 && D <= 28);
        default: return false;
    }
}

int Date() {
    if (!IsDate()) return -1;
    
    switch(M) {
        case 3: case 4: case 5: return 1;
        case 6: case 7: case 8: return 2;
        case 9: case 10: case 11: return 3;
        default: return 4;
    }
}

int main() {
    cin >> Y >> M >> D;

    switch (Date()) {
        case 1:
            cout << "Spring\n";
            break;
        case 2:
            cout << "Summer\n";
            break;
        case 3:
            cout << "Fall\n";
            break;
        case 4:
            cout << "Winter\n";
            break;
        default:
            cout << Date() << endl;
    }
    return 0;
}
