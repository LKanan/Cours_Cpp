#include <iostream>

using namespace std; 

int addition(int nber1, int nber2){
    return nber1+nber2;
}

void echange(double& a, double& b){
    double temporaire(a); //On sauvegarde la valeur de 'a'

    a = b;                //On remplace la valeur de 'a' par celle de 'b'

    b = temporaire;       //Et on utilise la valeur sauvegardée pour mettre l'ancienne valeur de 'a' dans 'b'
}

int main(){
    int nber1, nber2;
    cout << "Saisissez le premier nombre : ";
    cin >> nber1;
    cout << "Saisissew le deuxieme nombre : ";
    cin >> nber2;
    cout << "La somme de " << nber1 << " et " << nber2 << " est : " << addition(nber1, nber2) << endl;


    double a(1.2), b(4.5);

    cout << "a vaut " << a << " et b vaut " << b << endl;

    echange(a,b);   //On utilise la fonction

    cout << "a vaut " << a << " et b vaut " << b << endl;
    return 0;
}