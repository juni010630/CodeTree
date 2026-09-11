#include <iostream>
using namespace std;


int monthlyday(int m) {
    if (m == 2) return 29;
    else if ((m%2 == 1 && m<=7) || (m%2==0 && m>=8)) return 31;
    else return 30;
}

int main() {
    int m1,d1,m2,d2;
    cin >> m1 >> d1 >> m2 >> d2;
    
    string s; cin >> s;
    int day{};
    if (s == "Mon") day = 0;
    else if (s == "Tue") day = 1;
    else if (s == "Wed") day = 2;
    else if (s == "Thu") day = 3;
    else if (s == "Fri") day = 4;
    else if (s == "Sat") day = 5;
    else if (s == "Sun") day = 6;
    
    int travel{}, ans{};
    
    while (m1 != m2 || d1 != d2) {
        d1++;
        travel++;
        if (d1 > monthlyday(m1)) {
            d1 = 1;
            m1++;
        }
    }
    
    ans += (travel/7);
    if (travel % 7 >= day) ans++;
    cout << ans;
    
    return 0;
}
