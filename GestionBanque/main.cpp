#include <QCoreApplication>
#include <string>
#include <iostream>
#include "menu.h"

using namespace std;
enum CHOIX_MENU
{
    OPTION_1 = 1,
    OPTION_2,
    OPTION_3,
    OPTION_4,
    QUITTER
};


int main()
{
    int choix;
    Menu leMenu("compteBancaire.txt");
    do
    {
        choix = leMenu.Afficher();
        switch (choix)
        {
        case OPTION_1:
            cout << "Vous avez choisi l'option n°1" << endl;
            break;
            // à compléter
        }
    } while(choix != QUITTER);
    return 0;
}

