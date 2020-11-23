/****************************************************************************
**
** Classe ConfigurationArrosageC
** Author: Fabrice Charbonneau
** Date: oct-2020
**
****************************************************************************/


#include "ConfigurationArrosageC.h"
#include "../Arrosage/ArrosoirRotatif.h"
#include "../Arrosage/ArrosoirOscillant.h"

ConfigurationArrosageC::ConfigurationArrosageC() {

}

std::list<AbsArrosoir*> ConfigurationArrosageC::creerArrosoirs() const {
    // À COMPLÉTER
    // On veut que cette configuration contienne:
    // - un arrosoir oscillant avec les paramètres distance = 5 et vitesse = 5
    // - deux arrosoirs rotatifs avec le paramètre vitesseAngulaire = 4

    std::list<AbsArrosoir*> arrosoirs;

    ArrosoirOscillant* oscillant2 = new ArrosoirOscillant(5,5);
    ArrosoirRotatif* rotatif1= new ArrosoirRotatif(4);
    ArrosoirRotatif* rotatif2=  new ArrosoirRotatif(4);

    arrosoirs.push_back(oscillant2);
    arrosoirs.push_back(rotatif1);
    arrosoirs.push_back(rotatif2);

    return arrosoirs;
}
