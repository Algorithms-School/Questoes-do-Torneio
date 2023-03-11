#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
    string line;

    while (getline(cin, line)) {
      int count = 0;
      char prev = '\0';
      bool alit = false;
      char letter = line[0];
      for (int i = 0; i < line.size()-1; i++) {
        if(line[i] == ' ' && tolower(line[i+1]) == tolower(letter) && !alit) {
          count++;
          letter = line[i+1];
          alit = true;
        } else if(line[i] == ' ' && tolower(line[i+1]) != tolower(letter)) {
          letter = line[i+1];
          alit = false;
        }
      }
      cout << count << endl;
    }

    return 0;
}
