#include "Compte.h"
#include <iostream>

using namespace std;

Compte::Compte(const string& titulaire, const string& codeSecurite)
    : m_titulaire(titulaire), m_codeSecurite(codeSecurite), m_solde(0) 
{
}

const string& Compte::getCodeSecurite() const {
    return m_codeSecurite;
}

void Compte::deposer(double montant) {
    m_solde += montant;
}

bool Compte::retirer(double montant) {
    if (m_solde >= montant) {
        m_solde -= montant;
        return true;
    }
    return false;
}

void Compte::afficherSolde() const {
    cout << "Solde de " << m_titulaire << " : " << m_solde << "€" << endl;
}

void Compte::afficherRIB() const {
    cout << "RIB de " << m_titulaire << " : 123456789" << endl;  // Exemple de RIB
}

void Compte::transfererVers(Compte& autreCompte, double montant) {
    if (retirer(montant)) {
        autreCompte.deposer(montant);
        cout << "Transfert réussi de " << montant << "€ vers " << autreCompte.m_titulaire << endl;
    } else {
        cout << "Solde insuffisant pour le transfert." << endl;
    }
}

