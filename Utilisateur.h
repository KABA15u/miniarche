#ifndef DEF_UTILISATEUR
#define DEF_UTILISATEUR

#include <iostream>
#include <string>
#include "BoiteDeReception.h"

class Utilisateur 
{
      public:
      
      ~Utilisateur();
      Utilisateur(std::string nom, std::string prenom, std::string login, std::string mdp);  
      std::string getNom() const;
      void setNom(std::string nom);
      std::string getPrenom() const;
      void setPrenom(std::string prenom);
      std::string getLogin() const;
      void setLogin(std::string login);
      std::string getMdp() const;
      void setMdp(std::string mdp);
      void newMessage(std::string message);
      std::string afficherMessage() const;
      void ajouterMessage(std::string message);
      void supprimerMessage(int i);
    
      void affichageConsole() const;
           
      private:
      
      std::string m_nom;
      std::string m_prenom;
      std::string m_login;
      std::string m_mdp;
      BoiteDeReception m_bdr;
      
};

#endif

