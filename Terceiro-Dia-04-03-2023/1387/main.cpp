#include <iostream>

using namespace std;

int main() {
    int L, R;
    while (cin >> L >> R && (L != 0 || R != 0)) {
        int total = L + R;
        cout << total << endl;
    }
    return 0;
}
