#ifndef LESRESSOURCES_H
#define LESRESSOURCES_H


class LesRessources
{
    public:

	public LesRessources()
	       addRessource(Ressource ressource)
	       deleteRessource(int index)
	       deleteAllRessources()
	       nbRessources()
	string getCommentaireRessource(int index)
	  void setCommentaireRessource(int index, string commentaire)
	string getNomRessource(int index)
	  void setNomRessource(int index, string nomRessource)
	  file getFichier(int index)
	  void setFichier(int index, File file)

}

            LesRessources();
   virtual ~LesRessources();
   protected:
     private:
           List<Ressource> lesRessources;
};

#endif // LESRESSOURCES_H
