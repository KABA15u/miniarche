#include "Utilisateur.h"
#include <string>

using namespace std;

      Utilisateur::Utilisateur(string nom, string prenom, string login, string mdp) :  m_nom(nom), m_prenom(prenom), m_login(login), m_mdp(mdp)
      {
                                                                                                           
      }
      
      Utilisateur::~Utilisateur()
      {
      
      }        
      
      string Utilisateur::getNom() const
      {
           return m_nom;
      }
      
      void Utilisateur::setNom(string nom)
      {
           m_nom = nom;
      }
      
      string Utilisateur::getPrenom() const
      {
           return m_prenom;
      }
      
      void Utilisateur::setPrenom(string prenom)
      {
           m_prenom = prenom;
      }
      
      string Utilisateur::getLogin() const
      {
             return m_login;
      }
      
      void Utilisateur::setLogin(string login)
      {
           m_login = login;
      }
      
      string Utilisateur::getMdp() const
      {
             return m_mdp;      
      }
      
      void Utilisateur::setMdp(string mdp)
      {
           m_mdp = mdp;
      }
      
      string Utilisateur::afficherMessage() const
      {
             return m_bdr.afficherMessage();
      }
      
      void Utilisateur::newMessage(string message)
      {
           m_bdr.newMessage(message);
      }

      void Utilisateur::ajouterMessage(string message)
      {
          m_bdr.ajouterMessage(message);
      }

      void Utilisateur::supprimerMessage(int i)
      {
          m_bdr.supprimerMessage(i);
      }

      void Utilisateur::affichageConsole() const
      {
           cout << "nom : " << m_nom << endl;
           cout << "prenom : " << m_prenom << endl;
           cout << "login : " << m_login << endl;
           cout << "mdp : " << m_mdp << endl;
           m_bdr.affichageConsole();
      }
