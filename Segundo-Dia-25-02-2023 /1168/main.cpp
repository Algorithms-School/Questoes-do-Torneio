#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int num_leds=0, num_casos;
    cin >> num_casos;

    for(int teste=0;teste<num_casos;++teste) {
        string numero;
        cin >> numero;

        for(auto digito:numero) {
            if(digito == '1')
                num_leds += 2;
            if(digito == '2')
                num_leds += 5;
            if(digito == '3')
                num_leds += 5;
            if(digito == '4')
                num_leds += 4;
            if(digito == '5')
                num_leds += 5;
            if(digito == '6')
                num_leds += 6;
            if(digito == '7')
                num_leds += 3;
            if(digito == '8')
                num_leds += 7;
            if(digito == '9')
                num_leds += 6;
            if(digito == '0')
                num_leds += 6;
        }
        cout << num_leds << " leds" << endl;
        num_leds = 0;
    }
    return 0;
}