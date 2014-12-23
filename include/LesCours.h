#ifndef LESCOURS_H
#define LESCOURS_H


class LesCours
{
    public:
	      List<Cours> lesCours
	      LesCours()
	 char getTitre(int index)
	 void setTitre(int index, String titre)
	 Date getDateDebut(int index)
     void setDateDebut(int index, Date dateDebut)
	 Date getDateFin(int index)
	 void setDateFin(int index, Date dateFin)
     char getCommentaireCours(int index)
     void setCommentaireCours(int index, String commentaire)
	 char getNomRessource(int indexCours, int indexRessource)
	 void setNomRessource(int indexCours, int indexRessource, String nomRessource)
	 void addRessource(int indexCours, Ressource ressource)
	 void deleteRessource(int indexCours, int indexRessource)
	 void deleteAllRessource(int indexCours)
	 int getNbRessources(int indexCours)
	 bool isDevoir(int indexCours, int indexRessource)
	 bool isFichier(int indexCours, int indexRessource)
	 File getFichier(int indexCours, int indexFichier)
	 void setFichier(int indexCours, File file)
	 void ajouterCours(Cours cours)
	 void supprimerCours(int index)
}

        LesCours();
        virtual ~LesCours();
    protected:
    private:
};

#endif // LESCOURS_H
