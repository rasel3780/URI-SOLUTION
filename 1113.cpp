#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y;

    while(true) {
        cin >> x >> y;
        if (x != y) {
            if (x > y) {
                cout << "Decrescente\n";
            } else if (x < y) {
                cout << "Crescente\n";
            }
        } else {
            break;
        }
    }
    return 0;
}

