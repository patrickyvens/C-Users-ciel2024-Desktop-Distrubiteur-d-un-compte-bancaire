#include "Client.h"
#include <iostream>


using namespace std;


Client::Client(const string& nom, const string& cin, const string& telephone)
    : m_nom(nom), m_cin(cin), m_telephone(telephone),
      m_compte1("DOSMEUS YVENS", "1111" ),// Code de sécurité pour compte 1
        
      m_compte2("DOSMEUS DAKKAR", "2222")// Code de sécurité pour compte 2
      
      
        
{
}


void Client::afficherInfo() const {
    cout << "Client : " << m_nom << endl;
    cout << "CIN : " << m_cin << endl;
    cout << "Téléphone : " << m_telephone << endl;
}


bool Client::verifierCodeSecurite(int compteChoisi, const string& code) {
    if (compteChoisi == 1) {
        return m_compte1.getCodeSecurite() == code;
    } else if (compteChoisi == 2) {
        return m_compte2.getCodeSecurite() == code;
    }
    return false;
}


Compte& Client::getCompte1() {
    return m_compte1;
}


Compte& Client::getCompte2() {
    return m_compte2;
}

