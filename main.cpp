#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <windowsx.h>
#include <string.h>
#include "constantes.h"
#include "Utilisateur.h"

HINSTANCE instance;
Utilisateur sarah("Sarah", "A", "S.A.", "motdepasse");

LRESULT CALLBACK procedureFenetrePrincipale(HWND, UINT, WPARAM, LPARAM);
BOOL APIENTRY connexion_procedure(HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam);

char buffer[50];

int WinMain(HINSTANCE cetteInstance, HINSTANCE precedentInstance, LPSTR lignesDeCommande, int modeDAffichage)
{
    HWND fenetrePrincipale;
    MSG message;
    WNDCLASS classeFenetre;

    instance = cetteInstance;

    classeFenetre.style=0;
    classeFenetre.lpfnWndProc = procedureFenetrePrincipale;
    classeFenetre.cbClsExtra = 0;
    classeFenetre.cbWndExtra = 0;
    classeFenetre.hInstance = NULL;
    classeFenetre.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    classeFenetre.hCursor = LoadCursor(NULL, IDC_ARROW);
    classeFenetre.hbrBackground = (HBRUSH)(1 + COLOR_BTNFACE);
    classeFenetre.lpszMenuName = NULL;
    classeFenetre.lpszClassName = "classeF";

    if(!RegisterClass(&classeFenetre)) return FALSE;

    fenetrePrincipale = CreateWindow("classeF",
                                    "Mini Arche",
                                    WS_OVERLAPPEDWINDOW,
                                    CW_USEDEFAULT,
                                    CW_USEDEFAULT,
                                    400,
                                    300,
                                    NULL, //pas de fenetre parent car Principale
                                    LoadMenu(instance, "ID_MENU"), //pas de menu
                                    cetteInstance,
                                    NULL); //Aucun param à lui envoyé en plus
    if(!fenetrePrincipale) return FALSE;

    ShowWindow(fenetrePrincipale, modeDAffichage);
    UpdateWindow(fenetrePrincipale);

    while(GetMessage(&message, NULL, 0,0))
    {
        TranslateMessage(&message);
        DispatchMessage(&message);
    }
    return message.wParam;
}

LRESULT CALLBACK procedureFenetrePrincipale(HWND fenetrePrincipale, UINT message, WPARAM wParam, LPARAM lParam)
{

    switch (message)
    {
    case WM_COMMAND:
        switch(LOWORD(wParam))
        {
        case ID_B_CONNEXION:
            DialogBox(instance, "CONNEXION", fenetrePrincipale, (DLGPROC)connexion_procedure);
            break;

        case ID_B_ACCEUIL:
            MessageBox(fenetrePrincipale, sarah.getLogin(), "Bonjour.", MB_ICONINFORMATION);
            break;

        case ID_B_QUITTER:
            SendMessage(fenetrePrincipale, WM_DESTROY, 0, 0);
            break;
        }
        return 0;

    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;

    default:
        return DefWindowProc(fenetrePrincipale, message, wParam, lParam);
    }
}

BOOL APIENTRY connexion_procedure(HWND boiteDeDialogue, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {

    case WM_CLOSE:
        EndDialog(boiteDeDialogue, 0);
        break;

    case WM_INITDIALOG:
        SetFocus(GetDlgItem(boiteDeDialogue, ID_C_EDIT_LOGIN));
        return FALSE;

    case WM_COMMAND:
        switch(LOWORD(wParam))
        {
            case ID_B_SECONNECTER:
                GetDlgItemText(boiteDeDialogue, ID_C_EDIT_LOGIN, buffer, 50); // recupere le texte
                if(!strcmp(buffer,sarah.getLogin())){
                    SetDlgItemText(boiteDeDialogue, ID_C_EDIT_MDP, buffer); // ecrit le texte
                } else {
                    SetDlgItemText(boiteDeDialogue, ID_C_EDIT_MDP, "erreur");
                }
                break;

            case ID_B_ANNULER:
                SendMessage(boiteDeDialogue, WM_CLOSE, NULL, NULL);
                break;
        }
        return 0;

    default:
        return FALSE;
    }
}
