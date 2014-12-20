#include "BoiteDeReception.h"
#include <vector>

using namespace std;

BoiteDeReception::BoiteDeReception() : m_message("Nouveau mesage !!")
{

}

void BoiteDeReception::newMessage(LPCSTR message)
{
     m_message = message;
}

LPCSTR BoiteDeReception::afficherMessage() const
{
     return m_message;
}

void BoiteDeReception::ajouterMessage(LPCSTR message){
    m_messageNonLu.push_back(message);
}

void BoiteDeReception::supprimerMessage(int i){
    int index = i-1;
    m_messageNonLu.erase (m_messageNonLu.begin()+index);
}
