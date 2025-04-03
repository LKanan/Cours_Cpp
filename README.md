# C++ programing course
## 1. La bibliothèques  iostream

1. **`#include <iostream>;`** :

Cette ligne inclut la bibliothèque standard d'entrée/sortie en C++. Elle permet d'utiliser des fonctionnalités comme std::cout pour afficher du texte à l'écran ou std::cin pour lire des entrées utilisateur.

2. **`using namespace std;`** :

Cette ligne permet d'éviter de devoir préfixer les noms des éléments du namespace **_std_ (standard)** avec `std::`. Par exemple, au lieu d'écrire `std::cout`, vous pouvez simplement écrire cout.
Cependant, cette pratique est parfois déconseillée dans les grands projets, car elle peut provoquer des conflits de noms si plusieurs namespaces sont utilisés.

Donc, la deuxième ligne simplifie l'écriture du code, mais elle doit être utilisée avec précaution.

3. **`cout`** commande l'affichage d'un message à l'écran.
4. **`endl`** crée un retour à la ligne dans la console.

Eg: `cout << "Hello world!" << endl;`

## 2. Déclarez une variable

Pour déclarer une variable, il faut écrire un code qui indique, dans l'ordre :

1.Son type.  
2. Son nom.  
3. Et la valeur qu'elle contient :

_`TYPE NOM(VALEUR);`_

## 3. Utilisez les références
La référence d'une variable, c'est un peu comme si on donnait un surnom à une variable en plus de son nom normal. On parle parfois d'alias, mais le mot correct en C++ est référence.  
On a une seule case mémoire, mais deux étiquettes qui lui sont accrochées.
Au niveau du code, on utilise une esperluette **( & )** pour déclarer une référence sur une variable  
Eg: 
```cpp
int ageUtilisateur(16);  //Déclaration d'une variable.

int& maVariable(ageUtilisateur); //Déclaration d'une référence nommée maVariable qui est accrochée à la variable ageUtilisateur
```
**La référence doit impérativement être du même type que la variable à laquelle elle est accrochée ! Un int&  ne peut faire référence qu'à un int  , de même qu'un string& ne peut être associé qu'à une variable de type string.  
Une fois qu'elle a été déclarée, on peut manipuler la référence comme si on manipulait la variable elle-même. Il n'y a aucune différence entre les deux.**