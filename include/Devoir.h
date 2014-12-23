#ifndef DEVOIR_H
#define DEVOIR_H


class Devoir
{
    public:

	Devoir();
	Devoir(string nomDevoir, string commentaire, File fichier);
	string getStatut();
	string getNomDevoir();
	void setNomDevoir(string nomDevoir);
	string getCommentaire();
	void setCommentaire(string commentaire);
	File getFichier();
	void setFichier(File fichier);
	string toString();

	     final string type = "devoir";
       virtual ~Devoir();
    protected:
      private:
	          string nomDevoir;
	          string commentaire;
	          date fichier;
};

#endif // DEVOIR_H
