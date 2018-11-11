#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
int main(int argc, char *argv[] ){
 //argc : nombre d’arguments, argv : le tableau contenant la valeur des arguments
 int a = 1 ;
 printf(" le chiffre est %d \n ", a);
 char clavier[100];
 printf(" Saisissez le texte : ");
 scanf("%s’", clavier);
 printf("%s \n",clavier) ;
 int i;
 for(i=0;i<argc;i++){
 printf("%s \n", argv[i]);
 }
} 
