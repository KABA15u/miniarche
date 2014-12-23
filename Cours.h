#ifndef COURS_H
#define COURS_H


class Cours
{
    public:

	          Cours();
	          Cours(string titre, Date dateDebut, Date dateFin, string commentaire);
	   string getType();
	   string getTitre();
	     void setTitre(string titre);
	     Date getDateDebut();
	     void setDateDebut(Date dateDebut);
	     Date getDateFin();
	     void setDateFin(Date dateFin);
       string getCommentaireCours();
	     void setCommentaireCours(string commentaire);
	   string getNomRessource(int index);
	     void setNomRessource(int index, string nomRessource);
	     void addRessource(Ressource ressource);
	     void deleteRessources(int index);
	     void deleteAllRessource();
	      int getNbRessources();
	     bool isDevoir(int index);
	     bool isFichier(int index);
	     File getFichier(int index);
	     void setFichier(int index, File file);

        virtual ~Cours();
      protected:
        private:
         final string type = "cours";
	           string titre;
	             Date dateDebut;
                 Date dateFin;
	           string commentaire;
        LesRessources ressourcesDuCours;
};

#endif // COURS_H
