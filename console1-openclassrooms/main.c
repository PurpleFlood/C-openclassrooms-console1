//
//  main.c
//  console1-openclassrooms
//
//  Created by asap on 27/02/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include "view.h"

//Appel des fonctions proto



int main(int argc, const char * argv[]) {
    
    // Déclaration de variables
    /*int var1;
    int var2;
    int rs;
    var1 = 20;
    var2 = 100;
    */
    // Calcul de variable
    /*
    rs = var1+var2;
    printf("premier resultat: %d\n", rs);
    rs = rs - var1;
    printf("deuxieme resultat: %d\n", rs);
    rs = rs * 2;
    printf("troisième resultat %d\n", rs);
    rs = rs / 2;
    printf("dernier resultat %d\n", rs);
    printf("var1: %d\n", var1);
    printf("Hello, World!\n");
    */
    
    // Condition
    /*
    int age;
    age = 28;
    if (age >= 18 && age <= 25)
    {
        printf("Vous avez entre 18 et 25, entrez\n");
    }
    else if (age > 25 && age < 30)
    {
        printf("Vous avez entre 25 et 30 ans, entrez\n");
    }
    else {
        printf("Vous êtes mineur, c'est guez, t'as %d ans sale merde\n", age);
    }
    */
    // Boucle
    // While
    /*
    int nombreSecret;
    int nombreChoisi;
    nombreChoisi = 0;
    nombreSecret = 30;
    while (nombreChoisi != nombreSecret)
    {
        printf("Taper un nombre : ");
        scanf("%d", &nombreChoisi);
    }
    printf("Bravo vous avez gagné !!\n");
    */
    //While Incrémentation
    /*
    int compteur;
    compteur = 0;
    while (compteur < 10)
    {
        printf("T'es trop gay \n");
        compteur++;
    }
    */
    //Do...while
    /*
    int compteur = 0;
    do {
        printf("oui test test\n");
        compteur++;
    } while (compteur < 10);
    */
    //For
    /*
    int k;
    for (k=0; k<10; k++) {
        printf("test test\n");
    }
    */
    // Appelle de fonction
    int nombre;
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);
    printf("Le resultat est : %d\n", triple(nombre));
    
    int largeur, longueur;
    printf("Entrez une largeur : ");
    scanf("%d", &largeur);
    printf("Entrez une longueur : ");
    scanf("%d", &longueur);
    
    printf("L'air du rectangle est de %f", airRectangle(largeur, longueur));
    return 0;
}

//Déclaration des fonctions
int triple(int var){
    return var * 3;
}
double airRectangle(double largeur, double longueur){
    return largeur * longueur;
}
