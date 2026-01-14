#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;
int idx = -1;

void IsPattern() {
    int i{};
    while (text[i] != '\0') {
        if (text[i] == pattern[0]) {
            int j{};
            while (pattern[j] != '\0') {
                if (text[i+j] == '\0') break;
                
                if (text[i+j] != pattern[j]) break;
                    
                j++;
            }
            if (pattern[j] == '\0') {
                idx = i;
                return;
            }
        }
        i++;
    }
}

int main() {
    cin >> text;
    cin >> pattern;
    
    IsPattern();
    cout << idx;
    

    

    return 0;
}
