#include <iostream>
#include <string>
#include "MaBanque.h"
using namespace std;
 
int main()
{
    int choix;
    int somme;
    MonCompte Dupont;
 
    cout << "1. Deposer de l'argent" << endl << "2. Retirer de l'argent" << endl;
    cin >> choix;
 
    if (choix == 1)
    {
        cout << "Combien voulez-vous deposer ? ";
        cin >> somme;
        Dupont.deposerArgent(somme);
    }
 
    else if (choix == 2)
    {
        cout << "Combien voulez vous retirer ? ";
        cin >> somme;
        Dupont.retirerArgent(somme);
    }
 
 
    return 0;
}
