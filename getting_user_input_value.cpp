#include <iostream>
#include <string>

 using namespace std;

 int main(){
    int age;
    string name_last_name;
    string first_name;

    cout << "Quel est votre age ? ";
    cin >> age;
    cin.ignore();
    cout << "Quelle est votre nom et post_nom ? ";
    getline(cin,name_last_name);
    cout << "Quel est votre prenom ? ";
    cin >> first_name;
    cout << name_last_name << " vous avez " << age << " ans" << endl;

    return 0;
 }