#include <iostream>
#include "Utilisateur.h"

using namespace std;

int main()
{
    Utilisateur sarah("Sarah", "A", "sa", "motdepasse");
    
    cout << "Affichage avant les set() : " << endl;
    cout << "nom : " << sarah.getNom() << endl;
    cout << "prenom : " << sarah.getPrenom() << endl;
    cout << "login : " << sarah.getLogin() << endl;
    cout << "mdp : " << sarah.getMdp() << endl;

    sarah.setNom("nouveauNom");
    sarah.setPrenom("nouveauPrenom");
    sarah.setLogin("nouveauLogin");
    sarah.setMdp("nouveauMdp");
    sarah.getNom();
    sarah.getPrenom();
    sarah.getMdp();
    sarah.getLogin();
    sarah.ajouterMessage("Premier message :D");
    sarah.ajouterMessage("Deuxieme message");
    sarah.ajouterMessage("message qui sera supprimé");
    
    cout << "Test de affichageConsole() : " << endl;
    sarah.affichageConsole();
    
    
    sarah.supprimerMessage(3);
    
    cout << "DEUXIEME Test de affichageConsole() : " << endl;
    sarah.affichageConsole();
    
    
    return 0;
}
    
