#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>

typedef struct{
  int x;
  int y;
  int z;
} coordonnees;

void Affichage(coordonnees *pc);
void Multipliaction(coordonnees *pc);
void Addition(coordonnees *pc);

void Affichage(coordonnees *pc){
  printf("x=%d y=%d z=%d\n", pc->x, pc->y, pc->z);
}
void Multiplication(coordonnees *pc){
  pc->z = (pc->x) * (pc->y);
    Affichage(pc);
}
void Addition(coordonnees *pc){
  pc->z = (pc->x) + (pc->y);
    Affichage(pc);
}
int main(){
  coordonnees c={10,20,30};
  Affichage(&c);
  Multiplication(&c);
  Addition(&c);
  return 0;
}
