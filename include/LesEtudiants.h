#ifndef LESETUDIANTS_H
#define LESETUDIANTS_H


class LesEtudiants
{
    public:

          inscrireEtudiant(Etudiant etudiant);
	void  desinscrireEtudiant(Etudiant etudiant);
	void  desinscrireEtudiant(int index);;
	bool  estInscrit(Etudiant etudiant);
	bool  estEtudiant(String login, String mdp);
	      Etudiant getEtudiantCourant();
	void  setEtudiantCourant(Etudiant etudiant);
	int   getNbDevoirRendu(int index);
	bool  rendu(int index);
	float getNoteDevoir(int index);
	void  setNoteDevoir(int index, float note);
	      getNbEtudiants();
	void  newMessage(char objet, char motif);
	char  toString();

          LesEtudiants();
    virtual ~LesEtudiants();

    protected:
    private:
            List<Etudiant> lesEtudiants;
	        Etudiant etudiantCourant;
};

#endif // LESETUDIANTS_H
