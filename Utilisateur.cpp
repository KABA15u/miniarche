#include "Utilisateur.h"
#include <windows.h>
#include <windowsx.h>

using namespace std;

      Utilisateur::Utilisateur(LPCSTR nom, LPCSTR prenom, LPCSTR login, LPCSTR mdp) :  m_nom(nom), m_prenom(prenom), m_login(login), m_mdp(mdp)
      {

      }

      Utilisateur::~Utilisateur()
      {

      }

      LPCSTR Utilisateur::getNom() const
      {
           return m_nom;
      }

      void Utilisateur::setNom(LPCSTR nom)
      {
           m_nom = nom;
      }

      LPCSTR Utilisateur::getPrenom() const
      {
           return m_prenom;
      }

      void Utilisateur::setPrenom(LPCSTR prenom)
      {
           m_prenom = prenom;
      }

      LPCSTR Utilisateur::getLogin() const
      {
             return m_login;
      }

      void Utilisateur::setLogin(LPCSTR login)
      {
           m_login = login;
      }

      LPCSTR Utilisateur::getMdp() const
      {
             return m_mdp;
      }

      void Utilisateur::setMdp(LPCSTR mdp)
      {
           m_mdp = mdp;
      }

      LPCSTR Utilisateur::afficherMessage() const
      {
          return m_bdr.afficherMessage();
      }

      void Utilisateur::newMessage(LPCSTR message)
      {
          m_bdr.newMessage(message);
      }
