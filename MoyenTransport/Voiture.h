#include "MoyenTransport.h"
#include "Utilisateur.h"

class Voiture : public MoyenTransport {

    Utilisateur proprietaire;

public:

    Voiture(Utilisateur *user, string nom, float vitesse);
    
} ;