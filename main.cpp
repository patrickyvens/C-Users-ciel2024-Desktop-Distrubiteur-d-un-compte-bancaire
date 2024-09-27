#include <iostream>
#include "Client.h"

using namespace std;

int main() {
    cout << "Programme de gestion de comptes bancaires." << endl;
    cout << "Auteur : Yvens Dosmeus" << endl;
    cout << "Cadre  : TP C++ Informatique" << endl;
    cout << "Date   : 17/09/2024" << endl;

    cout << "" << endl;

    cout << "-------------------------------------------" << endl;
    cout << "" << endl;


    Client cl1("Dosmeus Yvens", "ABC123456", "0605885332");

    cout << "Bienvenue au distributeur automatique." << endl;
    cout << "Veuillez choisir un compte (1 ou 2) : ";
    int compteChoisi;
    cin >> compteChoisi;

    cout << "Veuillez entrer votre code de securite : ";
    string codeSecurite;
    cin >> codeSecurite;

    if (!cl1.verifierCodeSecurite(compteChoisi, codeSecurite)) {
        cout << "Code de securite incorrect." << endl;
        return 1;
    }

    Compte* compte;
    if (compteChoisi == 1) {
        compte = &cl1.getCompte1();
    } else {
        compte = &cl1.getCompte2();
    }

    int choix;
    do {
        cout << "\n1. Deposer de l'argent" << endl;
        cout << "2. Retirer de l'argent" << endl;
        cout << "3. Consulter le solde" << endl;
        cout << "4. Consulter RIB" << endl;
        cout << "5. Transferer de l'argent" << endl;
        cout << "6. Quitter" << endl;
        cout << "Choisissez une option : ";
        cin >> choix;

        switch (choix) {
            case 1: {
                double montant;
                cout << "Montant a deposer : ";
                cin >> montant;
                compte->deposer(montant);
                break;
            }
            case 2: {
                double montant;
                cout << "Montant a retirer : ";
                cin >> montant;
                if (!compte->retirer(montant)) {
                    cout << "Solde insuffisant." << endl;
                }
                break;
            }
            case 3:
                compte->afficherSolde();
                break;
            case 4:
                compte->afficherRIB();
                break;
            case 5: {
                cout << "Choisissez le compte destinataire (1 ou 2) : ";
                int destinataire;
                cin >> destinataire;

                // ici il demande le code du compte dest 
                cout << "Veuillez entrer le code de securite du compte destinataire : ";
                string codeDestinataire;
                cin >> codeDestinataire;

                // et ici il verifier 
                if (!cl1.verifierCodeSecurite(destinataire, codeDestinataire)) {
                    cout << "Code de securite du compte destinataire incorrect." << endl;
                    break;
                }

                double montant;
                cout << "Montant a transferer : ";
                cin >> montant;

                if (destinataire == 1) {
                    cout <<" DOSMEUS YVENS" << endl;
                    compte->transfererVers(cl1.getCompte1(), montant);
                } else if (destinataire == 2) {
                    compte->transfererVers(cl1.getCompte2(), montant);
                } else {
                    cout << "Compte destinataire invalide." << endl;
                }
                break;
            }
            case 6:
                cout << "Au revoir !" << endl;
                break;
            default:
                cout << "Option invalide." << endl;
        }
    } while (choix != 6);

    return 0;
}
