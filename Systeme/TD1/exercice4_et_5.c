#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<time.h>

//  Proposer un programme c qui demande de saisir
// une taille de tableau, puis alloue dynamiquement
//  un tableau d’entiers de cette taille,
// le remplit avec des valeurs aléatoires comprises entre 0 et 100 et
//  l’affiche.
//


// void AlloueEspaceTab(*char){
//   char * pointeur = malloc(20 * sizeof(char)); //Allocation de 20 caractères
// if(pointeur == NULL) {
//  printf("L'allocation n'a pu être réalisée\n");
// } else {
//  printf("L'allocation a été un succès\n");
//  free(pointeur); //Libération des 20 octets précédemment alloués
//  pointeur = NULL; // Invalidation du pointeur
// }
//
//   }


// void AjoutValTab(long taille, int *pointeur){
//   for(int i=0; i<taille;i++){
//   pointeur[i] = srand(time(NULL));
//   }
// }
 int main(){
   srand(time(NULL));
     printf("Veuillez saisir une taille de tableau \n");
     unsigned long taille1;
     scanf("%lu", &taille1);
     int *pointeur = malloc(taille1 * sizeof(int));
     if(pointeur == NULL) {
      printf("L'allocation n'a pu etre realisee\n");
     } else {
      printf("L'allocation a ete un succes\n");
      printf("Valeurs aleatoires du tableau :\n");
      for(int i=0; i<taille1;i++){
      pointeur[i] = rand()%(0+100);
      printf("%d \n", pointeur[i]);
      }
      printf("Voulez vous-saisir une nouvelle taille de tableau ?\n");
      printf("Saisir 1 pour quitter, 2 pour allouer une nouvelle taille\n");
      int x;
      scanf("%d" ,&x);
      if(x==1){
        return 0;
      } else if(x==2){
        unsigned long taille2;
        printf("Saisir une nouvelle taille :");
        scanf("%lu", &taille2);
        int *Tab = realloc(pointeur, taille2*sizeof(int));
        if (pointeur == NULL) {
         free(pointeur);
        } else

      if(taille2<=taille1){
          pointeur = Tab;
          for(int i=0;i<taille2;i++){
            printf("%d \n", pointeur[i]);
          }
      }else if(taille2>taille1){
        for(int i=0;i<taille2;i++){
          if(i<=taille1){
              pointeur = Tab;
              printf("%d \n", Tab[i]);
          }else if(i>taille1){
            Tab[i]=rand()%(0+100);
            printf("%d \n", Tab[i]);
          }
        }

      }

      }

  }
return 0;
}
