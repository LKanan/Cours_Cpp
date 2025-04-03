#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int number = 16;
    int number_powered = 2;
    int power = 5;
    double number_power = pow(number_powered, power);
    double number_sqrt = sqrt(number);

    cout << "La racine carré de " << number << " est " << number_sqrt << endl;
    cout << "Le nombre " << number_powered << " puissance " << power << " est : " << number_power << endl;
    return 0;
}