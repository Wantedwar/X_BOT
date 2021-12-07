//
// Created by jser on 11/11/2021.
//

#ifndef SURVIE_COMPTEUR_H
#define SURVIE_COMPTEUR_H


class Compteur {
private:
    /*static int constructeur;
    static int constructeurCopie;
    static int destructeur;*/
public:
    Compteur();
    virtual ~Compteur();

    static void ajouterConstructeur();
    static void ajouterConstructeurCopie();
    static void ajouterDestructeur();
    static int getNbConstructeurs();
    static int getNbConstructeursCopie();
    static int getNbDestructeurs();

};



#endif //SURVIE_COMPTEUR_H
