#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<time.h>
int main(){
char *tableau[10];
int n;
printf("Veuillez saisir le nombre de chaines a rentrer :\n");
scanf("%d", &n);

for(int i=0; i<n; i++){
  char chaine[10];
  printf("donner la chaine :");
  scanf("%9s",chaine);
  getchar();
  tableau[i] = malloc(strlen(chaine)+1);
  if(tableau[i] != NULL){
    strcpy (tableau[i],chaine);
  }else{
    printf("no\n");
  }
}
  for(int i=0;i<n;i++){
    puts(tableau[i]);
  }
  for(int i=0; i<n;i++){
    free(tableau[i]);
     tableau[i]=NULL;
  }
  return 0;
  }
