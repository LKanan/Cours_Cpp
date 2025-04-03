#include <iostream> //Inclut la bibliothèque iostream (affichage de texte)

/*Cette ligne permet d'indiquer dans quel lot de fonctionnalités notre fichier source va aller piocher.
Si vous chargez plusieurs bibliothèques, chacune va proposer de nombreuses fonctionnalités.
Parfois, certaines fonctionnalités ont le même nom. Imaginez une commande qui s'appellerait "AfficherMessage" 
pour iostream mais aussi pour une autre bibliothèque comme Qt  ! Si vous chargez les deux bibliothèques en même 
temps et que vous appelez "AfficherMessage", l'ordinateur ne saura pas s'il doit afficher un message en console avec 
iostream ou dans une fenêtre avec Qt  !*/

using namespace std;

int main(){

    cout << "Hello world!" << endl; //Affiche un message
    cout << "Bonjour tout le monde !" << endl << "Comment allez-vous ?" << endl;

    return 0;

}