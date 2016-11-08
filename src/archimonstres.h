#ifndef ARCHIMONSTRES_H
#define ARCHIMONSTRES_H

struct Pokedex {

  int id[ARCHIMONSTRES];
  char* name[ARCHIMONSTRES];
  int quantity[ARCHIMONSTRES];

};

/*
 * Initialisation, ne le faire qu'une fois !!!
 * Commande: ./a.out reset
 */
 void initialisation();

void add_archi();



#endif
