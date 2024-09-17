#include <iostream>
#include <string>
#include "MaBanque.h"

using namespace std;

MonCompte::MonCompte()
{
    m_solde = 200;
    m_nom = "DOSMEUS";
    m_prenom = "Yvens";
}


//inutile mais je préfère prendre l'habitude
MonCompte::~MonCompte()
{
}

void MonCompte::deposerArgent(int somme)
{
    m_solde = m_solde + somme;
    cout << "Le montant que vous avez deposer mr est :" << somme <<"euros. Et votre solde est actuelment de " << m_solde << "euros." << endl;

}

void MonCompte::retirerArgent(int somme)
{
    if (somme > m_solde)
        cout << "Vous n'avez pas essez argent." << endl;

    else
    {
        m_solde = m_solde - somme;
        cout << "Actuelmant votre solde est de " << m_solde <<" euros." << endl;

    }    

}
