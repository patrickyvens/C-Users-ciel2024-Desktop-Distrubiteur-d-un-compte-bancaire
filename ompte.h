#ifndef COMPTE_H
#define COMPTE_H

#include <string>

using namespace std;

class Compte {
private:
    string m_titulaire;
    string m_codeSecurite;
    double m_solde;

public:
    Compte(const string& titulaire, const string& codeSecurite);

    const string& getCodeSecurite() const;
    void deposer(double montant);
    bool retirer(double montant);
    void afficherSolde() const;
    void afficherRIB() const;

    void transfererVers(Compte& autreCompte, double montant);
};

#endif
