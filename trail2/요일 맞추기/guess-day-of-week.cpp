#include <iostream>
using namespace std;

int monthlyday(int m) {
    if (m == 2) return 28;
    else if ((m%2 == 1 && m<=7) || (m%2==0 && m>=8)) return 31;
    else return 30;
}

int main() {
    int m1,d1,m2,d2;
    cin >> m1 >> d1 >> m2 >> d2;
    
    int day{0};
    
    if (m1 > m2 || (m1 == m2 && d1 > d2)) { // 4월 7일 부터 1월 1일까지
        do {
            day--;
            d1--;
            if (d1 == 0) {
                m1--;
                d1 = monthlyday(m1);
            }
        } while (d1 != d2 || m1 != m2);
    }
    else if (m1 < m2 || (m1 == m2 && d1 < d2)) { // 1월 2일부터 8월 2일까지
        
        while (d1 != d2 || m1 != m2){
            if (d1 > monthlyday(m1)) {
                m1++;
                d1 = 1;
            }
            d1++;
            day++;
            if (d1 > monthlyday(m1)) {
                d1 = 1;
                m1++;
            }
        }
    }
    
    day += 700;
    day %= 7;
    switch (day) {
        case(0):{
            cout << "Mon";
            break;
        }
        case(1):{
            cout << "Tue";
            break;
        }
        case(2):{
            cout << "Wed";
            break;
        }
        case(3):{
            cout << "Thu";
            break;
        }
        case(4):{
            cout << "Fri";
            break;
        }case(5):{
            cout << "Sat";
            break;
        }
        case(6):{
            cout << "Sun";
            break;
        }
            
    }
    
    
    return 0;
}
