//
// Created by jser on 25/11/2021.
//

#ifndef X_BOT_X213_H
#define X_BOT_X213_H
#include <string>
#include "Compteur.h"

class X213 {
private:
    std::string nom;
    int direction;
    int force;
    int vitesse;
    int vision;
public:
    X213();
    X213(X213 const &x213);
    X213(const std::string &nom, int direction, int force, int vitesse, int vision);
    virtual ~X213();

    const std::string &getNom() const {return nom;}
    void setNom(const std::string &nom) {X213::nom = nom;}
    int getDirection() const {return direction;}
    void setDirection(int direction) {X213::direction = direction;}
    int getForce() const {return force;}
    void setForce(int force) {X213::force = force;}
    int getVitesse() const {return vitesse;}
    void setVitesse(int vitesse) {X213::vitesse = vitesse;}
    int getVision() const {return vision;}
    void setVision(int vision) {X213::vision = vision;}

    int bloquer() const {return vitesse/3 + force;};
    void mouvement(int &x, int &y);
    void superCourse(int &x, int &y);
    void esquive(int &x, int &y, int xDanger, int yDanger);
    void tournerLesTalons();


};


#endif //X_BOT_X213_H
