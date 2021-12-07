 //
// Created by jser on 22/11/2021.
//

#ifndef X_BOT_X212_H
#define X_BOT_X212_H
#include <string>
#include "Compteur.h"


class X212 {
private:
    std::string nom;
    int direction;
    int force;
    int vitesse;
    int vision;
public:
    X212();
    X212(const std::string &nom, int direction, int force, int vitesse, int vision);
    X212(const X212 &x212);

    virtual ~X212();

    const std::string &getNom() const {return nom;};
    void setNom(const std::string &nom){this->nom = nom;};
    int getDirection() const{return direction;};
    void setDirection(int direction){X212::direction = direction;};
    int getForce() const{return force;};
    void setForce(int force){this->force = force;};
    int getVitesse() const {return vitesse;};
    void setVitesse(int vitesse){this->vitesse = vitesse;};
    int getVision() const{return vision;};
    void setVision(int vision){this->vision = vision;};
    int bloquer() const {return vitesse/3 + force;};
    void mouvement(int &x, int &y);
    void superCourse(int &x, int &y);
    void esquive(int &x, int &y, int xDanger, int yDanger);
};



#endif //X_BOT_X212_H
