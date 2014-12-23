#ifndef ENONCEDEVOIR_H
#define ENONCEDEVOIR_H


class EnonceDevoir
{
    public:

	      EnonceDevoir(string nomEnonce, Date dateDebut, Date dateFin, File fichier);
	      string getType();
	 void setNomDevoir(string nomDevoir);
	 Date getDateDebut();
	 void setDateDebut(Date dateDebut);
	 Date getDateFin();
	 void setDateFin(Date dateDebut);
	 void addDevoir(Devoir devoir);
	 void deleteDevoir(int index);
	 void deleteAllDevoirs();
	 Devoir getDevoir(int index);
	 string getNomDevoir(int index);
	 void setNomDevoir(int index, string nomDevoir);
	 float getNote(int index);
	 void setNote(int index, float note);
	 string getNomEtudiant(int index);
	 void setNomEtudiant(int index, string nomEtudiant);
	 string getPrenomEtudiant(int index);
	 void setPrenomEtudiant(int index, string prenomEtudiant);
	 Date getDateRendu(int index);
	 void setDateRendu(int index, Date dateRendu);

          final string type = "enonceDevoir";
        virtual ~EnonceDevoir();
    protected:
      private:
      private:
	          Date dateDebut;
	          Date dateFin;
	          LesDevoirs devoirsRendus;
};

#endif // ENONCEDEVOIR_H
