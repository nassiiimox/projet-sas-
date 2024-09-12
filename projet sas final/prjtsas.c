#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int conteur=0;
#define max 300
int choix=0;
int i;

struct date{
    int jour;
    int mois;
    int annee;
};
struct etudiant{
char nom[20];
char prenom[20];
int numberunique;
int note;
char departement [20] ;
struct date n ;

};
struct etudiant eleve[max] ;
struct etudiant eleve2[max] ;


void ajouter(){

printf("entrer les informations du contact d'etudiant %d: \n",conteur+1);
printf("entrer le nom:  \n");
scanf("%s",eleve[conteur].nom);
printf("entre le prenom \n");
scanf("%s",eleve[conteur].prenom);
printf("entrer le nombre unique \n");
scanf("%d",&eleve[conteur].numberunique);
printf("entrer la note \n");
scanf("%d",&eleve[conteur].note);
printf("entrer la departement \n");
scanf("%s",eleve[conteur].departement);
printf("entrer le jour de naissance");
scanf("%d",&eleve[conteur].n.jour);
printf("entrer le mois de naissance");
scanf("%d",&eleve[conteur].n.mois);
printf("entrer l'annee de naissance");
scanf("%d",&eleve[conteur].n.annee);
conteur++;

}
void aficher(){
    int i;
    for(i=0;i<conteur;i++){
printf("______________ \n");
printf("le nome et %s \n",eleve[i].nom);
printf("le prenom et %s \n",eleve[i].prenom);
printf("le nombre unique et %d \n",eleve[i].numberunique);
printf("la note et %d \n",eleve[i].note);
printf("la departement et %s \n",eleve[i].departement);
printf("la jour et %d \n",eleve[i].n.jour);
printf("la mois et %d \n",eleve[i].n.mois);
printf("l'anne et %d \n",eleve[i].n.annee);

}
}
void modification (){
    int num;
    for(i=0;i<conteur;i++){
printf("entrer la numbreunique");
scanf("%d",&num);
if(num==eleve[i].numberunique){
   printf("entrer le nouveau nom:  \n");
scanf("%s",eleve2[i].nom);
printf("entre le le nouveau prenom \n");
scanf("%s",eleve2[i].prenom);
printf("entrer la nouveau note \n");
scanf("%d",&eleve2[i].note);
printf("entrer la nouveau departement \n");
scanf("%s",eleve2[i].departement);
printf("entrer  le nouveau jour de naissance");
scanf("%d",&eleve2[i].n.jour);
printf("entrer le nouveau mois de naissance");
scanf("%d",&eleve2[i].n.mois);
printf("entrer le nouveau annee de naissance");
scanf("%d",&eleve2[i].n.annee);

strcpy(eleve[i].nom,eleve2[i].nom);
strcpy(eleve[i].prenom,eleve2[i].prenom);
strcpy(eleve[i].departement,eleve2[i].departement);
eleve[i].n.jour=eleve2[i].n.jour;
eleve[i].n.mois=eleve2[i].n.mois;
eleve[i].n.annee=eleve2[i].n.annee;

 printf("les info est modifie avec succes \n");



}
}
}
void supprimer(){
      int numbereleve;
      int j;
      printf("entrer le nombre de etudiant " );
      scanf("%d",&numbereleve);
      for(i=0;i<conteur;i++){
        if(numbereleve==eleve[i].numberunique){
            for(j=i;j<conteur-1;j++){
                eleve[j].numberunique=eleve[j+1].numberunique;
                printf("le etudiant et suppreme :  \n");
}
}
           conteur--;
}
}
    void calculemoyennegene(){
    int somme=0;
    int moyenne;
    for(i=0;i<conteur;i++){
    somme+=eleve[i].note;
}
moyenne=somme/conteur;
printf("____________ \n");
    printf("la moyenne generale et %d \n",moyenne);
}
void nombreeleve(){
    printf("____________ \n");
printf("le totale des etudiants et : %d  \n",conteur);
}
void rechercherparlenom(){
char smya[20];
printf("______________ \n");
printf("entrer le nome:  ");
scanf("%s",smya);
for(i=0;i<conteur;i++){
        if(strcmp(eleve[i].nom,smya)==0){
        printf("prenom et :%s \n",eleve[i].prenom);
        printf("number unique et :%d \n",eleve[i].numberunique);
        printf("la note et :%d \n",eleve[i].note);
        printf("la departement  et :%s \n",eleve[i].departement);
        printf("le jour de naissence et :%d \n",eleve[i].n.jour);
        printf("le mois de naissence et :%d \n",eleve[i].n.mois);
        printf("l'anne de naissence et :%d \n",eleve[i].n.annee);
}
}
}
void elevesuseil(){
for(i=0;i<conteur;i++){
    if (eleve[i].note>10){
            printf("____________ \n");
        printf("les eleves avec une moyenne superieur : %s \n",eleve[i].nom);
    }


}
}
int main()
{

    do{
printf("-------------------- menu--------------------\n");
printf(" clique 1 pour ajouter un etudiant \n");
printf("clique 2 pour afficher detaille sur  un etudiant \n");
printf("clique 3 pour modifier un etudiant \n");
printf("clique 4 pour supprime un etudiant \n");
printf("clique 5 pour calculer la moyenne generale \n");
printf("clique 6 pour afficher le nombre des etudiantes \n");
printf("clique 7 pour afficher les etudiant avec moynne superier a la seuil \n");
printf("clique 8 pour rechercher un etudiants par nom \n");
printf("clique 0 pour retour \n");
    scanf("%d",&choix);
    switch(choix){
    case 1 : ajouter();
    break;
    case 2 : aficher();
        break;
     case 3 :
         modification();
        break;
     case 4 : supprimer();
        break;
     case 5 : calculemoyennegene();
        break;
     case 6 : nombreeleve();
        break;
         case 7 :  elevesuseil();
        break;
         case 8 : rechercherparlenom();
        break;
        default : printf("entrer nombre entre 1 et 8");
        break;
    }
    }while(choix!=9);
    return 0;
}
