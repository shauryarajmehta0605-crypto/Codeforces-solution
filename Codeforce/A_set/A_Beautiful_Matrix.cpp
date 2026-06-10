#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int x, r, c;
 
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> x;
            if (x == 1) {
                r = i;
                c = j;
            }
        }
    }
 
    cout << abs(3 - r) + abs(3 - c);
 
    return 0;
}
