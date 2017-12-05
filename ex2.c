#include <stdio.h>
#include <stdlib.h>
typedef struct{
int j,m,a;}date;
typedef struct{
char *nom, *nat, *sexe ;
date dt;}joueur;


int main()
{
    int n,i,max;
printf("donner le nombre de joueurs");
scanf("%d",&n);
  joueur t[n];
for(i=1;i<=n;i++)
{
    printf("donner nom de joueur num %d \n",i);
    scanf("%s",&t[i].nom);
    printf("donner nationalité de joueur num %d\n",i);
    scanf("%s",&t[i].nat);
    printf("donner date de naissance de joueur num %d\n",i);
    printf("jour :");
    scanf("%d \n",&t[i].dt.j);
    printf("mois :");
    scanf("%d \n",&t[i].dt.m);
    printf("année :");
    scanf("%d \n",&t[i].dt.a);
    printf("donner sexe de joueur num %d\n",i);
    scanf("%s",&t[i].sexe);
}

for(i=1;i<=n;i++){
if(t[i].nat=='tunisienne'){printf("%s \n",t[i].nom);}
}

    return 0;
}
