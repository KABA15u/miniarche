#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H


class Enseignant
{
    public:

	 Enseignant();
	 Enseignant(string nomEnseignant, string prenomEnseignant, string login, string mdp);
	 string getStatut();

        Enseignant();
        final string statut = "enseignant";
      virtual ~Enseignant();
    protected:
      private:
};

#endif // ENSEIGNANT_H
