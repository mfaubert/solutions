//
//  main.cpp
//  salaires_des_representants
//
//  Created by Maïté Faubert on 04.10.20.
//  Copyright © 2020 Maïté Faubert. All rights reserved.
/*
But : Une grosse société de produits chimiques rémunère ses représentants commerciaux à la commission. Les représentants reçoivent 250 $ par semaine plus 7.5% de leurs ventes brutes par semaine. Par exemple, un représentant qui vend pour 5000 $ de produits chimiques en une semaine, perçoit un salaire de 250 $ plus 7.5 % de 5000$, soit un total de 625 $.

plan de tests
salaire_semaine         ventes         pourcentage_ventes       total
250                     5000           5000 * (7.5/100)         250 + (5000 * (7.5/100)) = 625
250                     2500           2500 * (7.5/100)         250 + (2500 * (7.5/100)) = 437,5
250                     0              0                        250
-1

 
Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et affiche son salaire. Entrez -1 à la valeur des ventes pour quitter le programme.
*/

#include<iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    
    // Déclaration des variables
    // Constantes
    const int SALAIRE_HEBDO = 250;
    const float POURCENTAGE_VENTE = 7.5/100;
    
    int ventes;
    float total_hebdo;
    int represantant = 1;
    
    // Demande à l'utilisateur de rentrer ses ventes hebdo.
    cout << "Entrez vos ventes brutes de la semaine (entrez -1 pour quitter) : " << endl;
    cin >> ventes;
    
    while (ventes != -1) {
        
        // Calcul du salaire
        total_hebdo = (ventes * POURCENTAGE_VENTE) + SALAIRE_HEBDO;
        
        // Affichage du salaire
        cout << "Salaire du représentant no. " << represantant << ": " << total_hebdo << endl;
        represantant ++;
        
        cout << "Entrez vos ventes brutes de la semaine (entrez -1 pour quitter) : " << endl;
        cin >> ventes;
        
    }
    
    return 0;
}


