#include <stdio.h>
#include <stdlib.h>

typedef struct
{
 int serie,typecpu;
int vitesse,taille;
}pc;

int main()
{

pc p1,p2;
    printf("donner numéro de serie \n");
    scanf("%s",&p1.serie);
    printf("donner type de cpu \n");
    scanf("%s",&p1.typecpu);
    printf("donner vitesse de cpu \n");
    scanf("%d",&p1.vitesse);
    printf("donner taille de memoire \n");
    scanf("%d",&p1.taille);

    printf("donner numéro de serie \n");
    scanf("%s",&p2.serie);
    printf("donner type de cpu \n");
    scanf("%s",&p2.typecpu);
    printf("donner vitesse de cpu \n");
    scanf("%d",&p2.vitesse);
    printf("donner taille de memoire \n");
    scanf("%d",&p2.taille);

    if(p1.vitesse<p2.vitesse){printf("le cpu le plus rapide est serie %d\n type %d\n vitesse %d\n taille %d\n",
p2.serie,p2.typecpu,p2.vitesse,p2.taille);}
else{printf("le cpu le plus rapide est serie %d\n type %d\n vitesse %d\n taille %d\n",
p1.serie,p1.typecpu,p1.vitesse,p1.taille);}


    return 0;
}
