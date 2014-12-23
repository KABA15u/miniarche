#include <windows.h>
#include <windowsx.h>
#include <vector>
#ifndef ETUDIANT_H
#define ETUDIANT_H


class Etudiant
{

	public :
	        Etudiant();
            Etudiant(char nomEtudiant, char prenomEtudiant, char login, char mdp);
	        char getStatut();
	        virtual ~Etudiant();
	        void addDevoir(Devoir devoir);
            void deleteDevoir(int index);
	        void deleteAllDevoirs();
	        char getNomDevoir(int index);
	        void setNomDevoir(int index, char nomDevoir);
	        Date getDateDevoir(int index);
	        void setDateDevoir(int index, Date dateDevoir);
	        bool rendu(int index);
	        float getNote(int index);
            void setNote(int index, float note);s

   final :   char statut = "etudiant";
	         LesDevoirs devoirsRendus;

};

#endif // ETUDIANT_H
