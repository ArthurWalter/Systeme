#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<time.h>

// Proposer un programme c qui alloue dynamiquement
//  une matrice (int ** matrice) d’entiers, la
// remplit avec des valeurs aléatoires et l’affiche.
//  Le nombre de lignes de colonnes étant saisi au clavier
// au préalable.

int main(){
  srand(time(NULL));
    printf("Veuillez saisir une taille de ligne \n");
    unsigned long m_taillel;
    scanf("%lu", &m_taillel);
      printf("Veuillez saisir une taille de colonne \n");
    unsigned long m_taillec;
    scanf("%lu", &m_taillec);

    int **matrice = malloc(m_taillel * sizeof(int));

  for(int i = 0; i <m_taillel; i++)
      matrice[i] = malloc(m_taillec * sizeof(int));
    if(matrice == NULL) {
     printf("L'allocation n'a pu etre realisee\n");
    } else {
     printf("L'allocation a ete un succes\n");
     printf("Valeurs aleatoires du tableau :\n");
     for(int i=0; i<m_taillel;i++){
      for(int j=0; j<m_taillec;j++){
        matrice[i][j] = rand()%(0+100);
        if(j==m_taillec-1)
        printf("%2d \n", matrice[i][j]);
        else{
          printf("%2d |", matrice[i][j]);
        }
      }
     }
     printf("Voulez vous-saisir une nouvelle taille de tableau ?\n");
     printf("Saisir 1 pour quitter, 2 pour allouer une nouvelle taille\n");
     int x;
     scanf("%d" ,&x);
     if(x==1){
       return 0;
     } else if(x==2){
       unsigned long m_taillel2;
       printf("Saisir une nouvelle taille de ligne :");
       scanf("%lu", &m_taillel2);// taille de ligne

       unsigned long m_taillec2;
       printf("Saisir une nouvelle taille de colonne :");
       scanf("%lu", &m_taillec2);// taille de colonne

       int **matrice_2 = realloc(matrice, m_taillel2 * sizeof(int));

     for(int i = 0; i <m_taillel2; i++)
         matrice[i] = realloc(matrice[i],m_taillec2 * sizeof(int));
       if(matrice_2 == NULL) {
        printf("L'allocation n'a pu etre realisee\n");
       } else {
          matrice = matrice_2;
         for(int i=0; i<m_taillel2;i++){
          for(int j=0; j<m_taillec2;j++){
            if(i>m_taillel2-1) printf("point mort");
            if(j==m_taillec2-1){
              matrice[i][j] = rand()%(0+100);
            printf("%2d \n", matrice[i][j]);
          } else{
              printf("%2d |", matrice[i][j]);
              }
            }
          }
          }
        }
      }
      return 0;
    }

     // if(taille2<=taille1){
     //     matrice = matrice_2;
     //     for(int i=0;i<taille2;i++){
     //       printf("%d \n", matrice[i]);
     //     }
     // }else if(taille2>taille1){
     //   for(int i=0;i<taille2;i++){
     //     if(i<=taille1){
     //         printf("%d \n", Tab[i]);
     //     }else if(i>taille1){
     //       Tab[i]=rand()%(0+100);;
     //       printf("%d \n", Tab[i]);
     //     }
     //   }
     //
     // }

// }
