//
// Created by jser on 11/11/2021.
//

#include "Compteur.h"

int constructeur = 0;
int constructeurCopie = 0;
int destructeur = 0;

Compteur::Compteur() {
    constructeur = 0;
    constructeurCopie = 0;
    destructeur = 0;
}
Compteur::~Compteur() {
    constructeur = -1;
    constructeurCopie = -1;
    destructeur = -1;
}

void Compteur::ajouterConstructeur() {
    constructeur++;
}

void Compteur::ajouterConstructeurCopie() {
    constructeurCopie++;
}

void Compteur::ajouterDestructeur() {
    destructeur++;
}

int Compteur::getNbConstructeurs() {
    return constructeur;
}

int Compteur::getNbConstructeursCopie() {
    return constructeurCopie;
}

int Compteur::getNbDestructeurs() {
    return destructeur;
}

