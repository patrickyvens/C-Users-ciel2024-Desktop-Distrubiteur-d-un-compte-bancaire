#include <iostream>
#include <string>
#include "MaBanque.h"


using namespace std;
 



int main()
{

 cout << "Programme de gestion de comptes bancaires." << endl;
  cout << "Auteur : Yvens Dosmeus" << endl;
  cout << "Cadre  : TP Informatique" << endl;
  cout << "Date   : 17/09/2024" << endl;

    int choix;
    int somme;
    MonCompte Dosmeus;
    


    cout << "" << endl;

    cout << "-------------------------------------------" << endl;
    cout << "" << endl;

    cout << " *** BONJOUR VEUILLER CHOISIR ***" << endl;
   
    cout << "1. Deposer de l'argent" << endl << "2. Retirer de l'argent" << endl << "3. consulter" << endl << "4. RIB" << endl << "5. Annuler le retrait" << endl;
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


       else if  (choix == 3)
    {
        cout << "Consulter votre compte ? ";
        cout << "Tapez 0  ";
        cin >> somme;
        Dosmeus.deposerArgent(somme);
    }


       else if (choix == 4)
    {
        cout << "   RELEVER D'IDENTITE BANCAIRE " << endl;

        cout << "----------------------------------- " << endl;

        cout << "Nom du titulaire du compte   :    DOSMEUS YVENS " << endl;
        cout << "le nom de la banque          :    Nickel   "      << endl;
        cout << "le code banque               :    156487 "        << endl;
        cout << "le numéro du compte         :    37905867842"    << endl;
        cout << "la clé RIB du code          :    12"             << endl;
        cout << "l’IBAN du compte           :    ***** "         << endl;
        cout << "le code BIC.                 :    ***** "         << endl;

        cout << "Tapez 0  ";
        
        
    }

       else if (choix == 5 )
    {
        cout << "Voulez vous vraiment annuler ? ";
        cout << "Tapez 5 Pour confimer  ";
        cin >> somme;
        cout << "Annulation Reussi ! AU REVOIR ";

        
    return 0;
    }


}

