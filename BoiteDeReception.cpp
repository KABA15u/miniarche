#include "BoiteDeReception.h"
#include <vector>

using namespace std;

BoiteDeReception::BoiteDeReception() : m_message("nouveau message")
{

}

void BoiteDeReception::newMessage(string message)
{
     m_message = message;
}

string BoiteDeReception::afficherMessage() const
{
     return m_message;
}

void BoiteDeReception::ajouterMessage(string message){
    m_messageNonLu.push_back(message);
}

void BoiteDeReception::supprimerMessage(int i){
    int index = i-1;
    m_messageNonLu.erase (m_messageNonLu.begin()+index);
}

void BoiteDeReception::affichageConsole() const
{
    cout << "message : " << m_message << endl;
    cout << "Messages non lu : " << endl;
    for(int i(0); i<m_messageNonLu.size(); i++)
    {
        cout << "message " << i << " : " << m_messageNonLu[i] << endl;
    }
    
}
