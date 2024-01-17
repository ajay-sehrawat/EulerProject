#include <bits/stdc++.h>
using namespace std;

int main() {
    bool check = true;
    
    for (int i = 1; i <= INT_MAX; i++) {
        for (int j = 1; j <= 20; j++) {
            if (i % j != 0) {
                check = false;
                break;
            }
        }
        if (check) {
            cout << i << endl;
            break;
        }
        check = true;
    }

    return 0;
}
