#ifndef ADMINISTRATEUR_H
#define ADMINISTRATEUR_H


class Administrateur
{
    public:

	             Administrateur();
	             Administrateur(string nomAdmin, string prenomAdmin, string login, string mdp);
          string getStatut();

   private final string statut = "admin";
   virtual ~Administrateur();
   protected:
     private:
};

#endif // ADMINISTRATEUR_H
