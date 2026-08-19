/*IMPLÉMENTATION D'UNE FILE DE PRIORITE AVEC UNE SD TAS*/

#include <stdio.h>
#define MAX 100
int tas[MAX];
int n = 0;


// Fonction pour afficher
void afficher(){
    int i;
    if (n == 0){
        printf("Tas Vide ! \n");
        return;
    }

    for(i = 0; i < n; i++) printf("%d", tas[i]);
    printf("\n");
}

// Fonction pour inserer
void inserer(int priorite){
    int i, parent, temp;
    if(n == MAX){
        printf("Tas Plein !\n");
        return;
    }

    //Placer le nouveau à la première position libre
    tas[n] = priorite;
    //Remonter ce noeud en permutant avec le parent jusqu'à l'obtention d'un tas
    i = n;
    n++;

    while(i > 0){
        parent = (i - 1) / 2;
        if(tas[parent] >= tas[i]) break;

        temp = tas[parent];
        tas[parent] = tas[i];
        tas[i] = temp;

        i = parent;
    }

    afficher();
}

// Fonction pour lire le maximum valeur
int lireMax(){
    if(n == 0){
        printf("Tas Vide! \n");
        return -1;
    }
    return tas[0];
}

// Fonction pour extraire le maximum valeur
int extraireMax(){
    int i, racine, gauche, droite, plusGrandFils, temp;
    if(n == 0) {
        printf("Tas Vide! \n");
        return -1;
    }

    racine = tas[0];
    //Remplacer la racine par le dernier noeud
    tas[0] = tas[n - 1];
    //Supprimer le dernier noeud (l'ancienne racine)
    n--;
    //Redescendre la racine en permutant avec le plus grand fils si nécéssaire
    i = 0;

    while(2 * i + 1 < n){
        gauche = 2 * i + 1;
        droite = 2 * i + 2;
        plusGrandFils = gauche;

        if(droite < n && tas[droite] > tas[gauche])
            plusGrandFils = droite;
        if(tas[i] >= tas[plusGrandFils])
            break;

        temp = tas[i];
        tas[i] = tas[plusGrandFils];
        tas[plusGrandFils] = temp;
        i = plusGrandFils;
    }
    
    return racine;
}


