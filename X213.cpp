//
// Created by jser on 25/11/2021.
//

#include "X213.h"

X213::X213() {
    Compteur::ajouterConstructeur();
}

X213::X213(const X213 &x213) {
    Compteur::ajouterConstructeurCopie();
}

X213::X213(const std::string &nom, int direction, int force, int vitesse, int vision){
    this->nom = nom;
    this->direction = direction;
    this->force = force;
    this->vitesse = force;
    this->vision = vision;
    Compteur::ajouterConstructeur();
}

X213::~X213() {
    Compteur::ajouterDestructeur();
}

void X213::mouvement(int &x, int &y) {
    int g = 50; //taille grille, à voir plus tard
    switch (direction) {
        case 0: //droite
            if(x-(vitesse+1) > 0)
                x -= vitesse+1;
            break;
        case 1:
            if(y+vitesse+1 < g)
                x+= vitesse+1;
            break;
        case 2:
            if (x+vitesse+1 < g)
                x += vitesse+1;
            break;
        default:
            if (y-(vitesse+1) > 0)
                y -= vitesse+1;
            break;
    }
}

void X213::superCourse(int &x, int &y) {
    int g = 50;
    switch (direction) {
        case 0: //droite

            if(x-(vitesse + (vitesse * force/10)) > 0)
                x -= (vitesse + (vitesse * force/10));
            break;
        case 1:
            if(y+(vitesse + (vitesse * force/10)) < g)
                x+= (vitesse + (vitesse * force/10));
            break;
        case 2:
            if (x+(vitesse + (vitesse * force/10)) < g)
                x += (vitesse + (vitesse * force/10));
            break;
        default:
            if (y-(vitesse + (vitesse * force/10)) > 0)
                y -= (vitesse + (vitesse * force/10));
            break;
    }
}


void X213::esquive(int &x, int &y, int xDanger, int yDanger) {
//esquive -> dash dans une direction aléatoire
//        -> si mur -> RIP

}

void X213::tournerLesTalons() {
    int tourner[4] = {2,3,0,1};
    direction = tourner[direction];
}