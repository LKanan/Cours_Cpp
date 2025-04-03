#include <iostream>

using namespace std;

int main(){
    int number = 10;

    int& refNumber(number); // reference to number

    cout << "number = " << number << endl;
    cout << "refnumber = " << refNumber << endl;

    refNumber = 20; 
    cout << "number = " << number << endl;
    cout << "refnumber = " << refNumber << endl;

    return 0;
}
