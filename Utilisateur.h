#ifndef DEF_UTILISATEUR
#define DEF_UTILISATEUR

#include <windows.h>
#include <windowsx.h>
#include "BoiteDeReception.h"

class Utilisateur
{
      public:

      ~Utilisateur();
      Utilisateur(LPCSTR nom, LPCSTR prenom, LPCSTR login, LPCSTR mdp);
      LPCSTR getNom() const;
      void setNom(LPCSTR nom);
      LPCSTR getPrenom() const;
      void setPrenom(LPCSTR prenom);
      LPCSTR getLogin() const;
      void setLogin(LPCSTR login);
      LPCSTR getMdp() const;
      void setMdp(LPCSTR mdp);
      LPCSTR afficherMessage() const;
      void newMessage(LPCSTR message);


      private:

      LPCSTR m_nom;
      LPCSTR m_prenom;
      LPCSTR m_login;
      LPCSTR m_mdp;
      BoiteDeReception m_bdr;

};

#endif

