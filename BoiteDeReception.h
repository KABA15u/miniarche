#ifndef DEF_BOITEDERECEPTION
#define DEF_BOITEDERECEPTION

#include <windows.h>
#include <windowsx.h>

class BoiteDeReception
{
    public:

    BoiteDeReception();
    void newMessage(LPCSTR message);
    LPCSTR afficherMessage() const;
    void ajouterMessage(LPCSTR message);
    void supprimerMessage(int i);

    private:

    char m_messageNonLu[50];
    char m_messageLu[50];
    LPCSTR m_message;
};

#endif
