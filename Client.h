#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include "Compte.h"

using namespace std;

class Client {
private:
    string m_nom;
    string m_cin;
    string m_telephone;
    Compte m_compte1;
    Compte m_compte2;

public:
    Client(const string& nom, const string& cin, const string& telephone);//constructeur pr trois para (nom, cin, et tel)

    void afficherInfo() const; //Méthode, c=ignifie qu'elle ne modifie pas l'état interne de l'obj Client
    bool verifierCodeSecurite(int compteChoisi, const string& code);

    Compte& getCompte1();
    Compte& getCompte2();
};

#endif

