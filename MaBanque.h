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
        void annul();
        


    private:

        int m_solde;
        std::string m_nom;
		std::string m_prenom;
           


};

#endif
