#ifndef MATIERE_H
#define MATIERE_H


class Matiere
{
    public:

	       string nomMatiere;
	       string nomAuteur;
	       string prenomAuteur;
           Date debutInscription;
           Date finInscription;
	       LesEtudiants listePrincipale;
	       LesEtudiants listeAttente;
	       LesCours listeCours;
	       Matiere();
	       Matiere(string nomMatiere, string nomAuteur, string prenomAuteur, Date debutInscription, Date finInscription);
	       string getNomMatiere();
	       void setNomMatiere(string nomMatiere);
	       string getNomAuteur();
	       void setNomAuteur(string nomAuteur);
	       string getPrenomAuteur();
	       void setPrenomAuteur(string prenomAuteur);
	       Date getDebutInscription();
	       void setDebutInscription(Date debutInscription);
	       Date getFinInscription();
	       void setFinInscription(Date finInscription);
	       bool ouverteAuxInscriptions();
	       void inscrireEtudiantLP(Etudiant etudiant);
	       void inscrireEtudiantLA(Etudiant etudiant);
	       void desinscrireEtudiantLP(int index);
	       void desinscrireEtudiantLA(int index);
	       bool estInscritEnLP(int index);
           bool estInscritEnLA(int index);
	       void newMessageLP(string objet, string  nomMatiere);
	       void newMessageLA(string objet, string nomMatiere);
           void laToLP();
         string getTitre(int index);
	       void setTitre(int index, string titre);
	       Date getDateDebut(int index);
	       void setDateDebut(int index, Date dateDebut);
	       Date getDateFin(int index);
	       void setDateFin(int index, Date dateFin);
	     string getCommentaireCours(int index);
           void setCommentaireCours(int index, string commentaire);
	       void ajouterCours(Cours cours);
	       void supprimerCours(int index)	;
	     string toString();
        virtual ~Matiere();
    protected:
    private:
};

#endif // MATIERE_H
