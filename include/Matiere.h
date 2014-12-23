#ifndef MATIERE_H
#define MATIERE_H


class Matiere
{
   public:

        Matiere();
        Matiere(String nomMatiere, String nomAuteur, String prenomAuteur, Date debutInscription, Date finInscription);
   char getNomMatiere();
   void setNomMatiere(String nomMatiere);
	char getNomAuteur();
	void setNomAuteur(String nomAuteur);
	char getPrenomAuteur();
	void setPrenomAuteur(String prenomAuteur);
	Date getDebutInscription();
	void setDebutInscription(Date debutInscription);
	Date getFinInscription();
    void setFinInscription(Date finInscription);
	boolean ouverteAuxInscriptions();
	void inscrireEtudiantLP(Etudiant etudiant);
	void inscrireEtudiantLA(Etudiant etudiant);
	void desinscrireEtudiantLP(int index);
	void desinscrireEtudiantLA(int index);
	bool estInscritEnLP(int index);
	bool estInscritEnLA(int index);
	void newMessageLP(String objet, String  nomMatiere);
	void newMessageLA(String objet, String nomMatiere);
	void laToLP();
	char getTitre(int index);
	void setTitre(int index, String titre);
	Date getDateDebut(int index);
	void setDateDebut(int index, Date dateDebut);
	Date getDateFin(int index);
	void setDateFin(int index, Date dateFin);
	char getCommentaireCours(int index);
	void setCommentaireCours(int index, String commentaire);
	void ajouterCours(Cours cours);
	void supprimerCours(int index);
	char toString();


        virtual ~Matiere();
    protected:
    private:
       char nomMatiere ;
	   char nomAuteur;
	   char prenomAuteur;
	   Date debutInscription;
       Date finInscription;
	   LesEtudiants listePrincipale;
	   LesEtudiants listeAttente;
       LesCours listeCours;
};

#endif // MATIERE_H
