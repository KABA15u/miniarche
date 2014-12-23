#ifndef LESENSEIGNANTS_H
#define LESENSEIGNANTS_H


class LesEnseignants
{
    public:

	LesEnseignants();
	void addEnseignant(Enseignant enseignant);
	void deleteEnseignant(int index);
	void deleteAllEnseignants();
	     Enseignant getEnseignant(char login);
	     boolean estEnseignant(char login, char mdp);
         Enseignant getEnseignantCourant();
    void setEnseignantCourant(Enseignant enseignant);
	     getNbEnseignant();
	char toString();
}

        LesEnseignants();
    virtual ~LesEnseignants();
    protected:
    private:
         Liste<Enseignant> lesEnseignants;
         Enseignant enseignantCourant;
};

#endif // LESENSEIGNANTS_H
