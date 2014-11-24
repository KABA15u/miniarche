#ifndef DEF_BOITEDERECEPTION
#define DEF_BOITEDERECEPTION

#include <iostream>
#include <string>
#include <vector>

class BoiteDeReception
{
    public:
    
    BoiteDeReception();
    void newMessage(std::string message);
    std::string afficherMessage() const;
    void ajouterMessage(std::string message);
    void supprimerMessage(int i);
    
    void affichageConsole() const; // plus tard toString()
      
    private:
    
    std::vector<std::string> m_messageNonLu;
    std::vector<std::string> m_messageLu;
    std::string m_message;
};

#endif
