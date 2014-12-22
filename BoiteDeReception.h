#ifndef DEF_BOITEDERECEPTION
#define DEF_BOITEDERECEPTION

#include <windows.h>
#include <windowsx.h>
#include <vector>

class BoiteDeReception
{
    public:

    BoiteDeReception();
    void newMessage(LPCSTR message);
    LPCSTR afficherMessage() const;
    void ajouterMessage(LPCSTR message);
    void supprimerMessage(int i);

    private:

    std::vector<LPCSTR> m_messageNonLu;
    std::vector<LPCSTR> m_messageLu;
    LPCSTR m_message;
};

#endif
