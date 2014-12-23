#ifndef RESSOURCE_H
#define RESSOURCE_H


class Ressource
{
    public:
          Ressource();
          Ressource(char nomRessource,char commentaire, File fichier);
	char getType();
	char getCommentaire();
	void setCommentaire(char commentaire);
	char getNom();
	void setNom(char nom);
	File getFichier();
	void setFichier(File fichier);
	char toString();
 }


       virtual ~Ressource();
    final char type = "ressource";
    protected:
      private:
            char commentaire;
	        char nomRessource;
	        File fichier;
};

#endif // RESSOURCE_H
