#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        map<int, string> planets;
        for (int i = 0; i < n; i++) {
            string planet;
            int year, time;
            cin >> planet >> year >> time;
            int arrival_year = year - time;
            planets[arrival_year] = planet;
        }
        cout << planets.begin()->second << endl;
    }
    return 0;
}
