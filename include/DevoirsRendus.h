#ifndef DEVOIRSRENDUS_H
#define DEVOIRSRENDUS_H


class DevoirsRendus
{
    public:

                  DevoirRendu(string nomDevoir, string nomEtudiant, string prenomEtudiant, Date dateRendu, File fichier);
	       string getType();
	        float getNote();
	         void setNote(float note);
	       string getNomEtudiant();
	         void setNomEtudiant(string nomEtudiant);
	       string getPrenomEtudiant();
	         void setPrenomEtudiant(string prenomEtudiant);
	         Date getDateRendu();
	         void setDateRendu(Date dateRendu);
                  DevoirsRendus();
    virtual ~DevoirsRendus();
    protected:
      private:
              Date dateRendu;
	          float note;
	          string nomEtudiant;
	          string prenomEtudiant;
};

#endif // DEVOIRSRENDUS_H
