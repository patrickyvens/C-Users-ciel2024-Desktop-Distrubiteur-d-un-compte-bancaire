#include <iostream>
#include <string>
#include "MaBanque.h"
using namespace std;
 
int main()
{
    int choix;
    int somme;
    MonCompte Dosmeus;




    cout << "Bonjour veuiller Choisir S'il vous plait" << endl;

    cout << "1. Deposer de l'argent" << endl << "2. Retirer de l'argent" << endl << "3. consulter"    << endl;
    cin >> choix;
 
    if (choix == 1)
    {
        cout << "Combien voulez-vous deposer ? ";
        cin >> somme;
        Dosmeus.deposerArgent(somme);
    }
 
    else if (choix == 2)
    {
        cout << "Combien voulez vous retirer ? ";
        cin >> somme;
        Dosmeus.retirerArgent(somme);
    }
 
 
    return 0;
}
