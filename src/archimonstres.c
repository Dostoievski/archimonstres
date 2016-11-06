#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ARCHIMONSTRES 286

int id[ARCHIMONSTRES];
char* name[ARCHIMONSTRES];
int quantity[ARCHIMONSTRES];




int main(int argc, char** argv)
{

  if (argc <= 1)
  {
    printf("There is a problem with your parameters Sir! \n");
  }

  // Initialisation, ne le faire qu'une fois !!!
  // Commande: ./a.out reset
  if (argc == 2 && strcmp(argv[1], "reset") == 0)
  {
      printf("Ok on entre dans le reset\n");
      int i = 0;
      for (i = 0; i < ARCHIMONSTRES; ++i)
      {
        id[i] = i;
        name[i] = "waiting_for_a_real_name";
        quantity[i] = 0;
      }
  }

  // Ajout d'archimonstres:
  // Commande: ./a.out add nom_archi

  if (argc == 3 && strcmp(argv[1], "add") == 0)
  {
    int k = 0;
    for (int i = 0; i < ARCHIMONSTRES; ++i)
      {

        if (strcmp(argv[2], name[i]) == 0)
        {
          printf("OK, l'archi a été trouvé, son id est: %d\n", id[i]);
          printf("Ajout de l'archimonstre en cours ...\n");
          quantity[i] += 1;
          k++;
        }
        else printf("Désolé, l'archimonstre indiqué n'a pas été trouvé! \n");


      }

  }



  // Suppression d'archimonstres (vente ou validation)
  // Commande ./a.out del nom_archi

  if (argc == 3 && strcmp(argv[1], "del") == 0)
  {
    int k = 0;
    for (int i = 0; i < ARCHIMONSTRES; ++i)
    {
      if (strcmp(argv[2], name[i]) == 0)
      {
        printf("OK, l'archi a été trouvé, son id est: %d\n", id[i]);
        printf("Suppression de l'archi en cours ...\n");
        if (quantity[i] == 0)
        {
          printf("Suppression impossible, aucun exemplaire possédé ! \n");
          return EXIT_FAILURE;
        }
        quantity[i] -= 1;
      }
      printf("Désolé, l'archimonstre indiqué n'a pas été trouvé! \n");
    }
  }

  // Affichage de tous les archimonstres
  // Commande: ./a.out display

  if (argc = 2 && strcmp(argv[1], "display") == 0)
  {
    printf("NOM       QUANTITE\n");
    for (int i = 0; i < ARCHIMONSTRES; ++i)
      printf("%s       %d\n", name[i], quantity[i]);
  }

  // Affichage des archimonstres manquants
  // Commande: ./a.out display_missing

  if (argc == 2 && strcmp(argv[1], "display_missing") == 0)
  {
      for (int i = 0; i < ARCHIMONSTRES; ++i)
      {
        if (quantity[i] == 0)
          printf("%s", name[i]);
      }
  }

//TODO: A chaque modification de la base de données,
// tenir à jour le fichier de logs pour initialiser la base à chaque reset.
// Besoin de définir une syntaxe.
// Règle à rajouter à chaque fin de méthode de modification.
















  return 0;
}
