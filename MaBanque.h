#ifndef DEF_MABANQUE
#define DEF_MABANQUE

class MonCompte
{
    public:
        MonCompte();
        ~MonCompte();
        void deposerArgent(int somme);
        void retirerArgent(int somme);
        void consulter();


    private:

        int m_solde;
        std::string m_nom;
           


};

#endif

