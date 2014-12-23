#ifndef LESMATIERES_H
#define LESMATIERES_H


class LesMatieres
{
    public:


	     LesMatieres();
	void addMatiere(Matiere matiere);
	void deleteMatiere(Matiere matiere);
    void deleteMatiere(String nomMatiere);
	void deleteAllMatiere();
	char getNomMatiere(int index);
	void setNomMatiere(int index, String nomMatiere);
    char getNomAuteurMatiere(int index);
	void setNomAuteurMatiere(int index, String prenomAuteurMatiere);
	char getPrenomAuteurMatiere(int index);
	void setPrenomAuteurMatiere(int index, String prenomAuteurMatiere);
	char toString();
};

#endif // LESMATIERES_H
