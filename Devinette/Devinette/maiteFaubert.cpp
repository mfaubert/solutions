//
//  main.cpp
//  Devinette
//
//  Created by Maïté Faubert on 04.10.20.
//  Copyright © 2020 Maïté Faubert. All rights reserved.
/*
But : Complétez ce programme pour qu’il donne la possibilité à l’utilisateur de deviner le nombre contenu dans iRandom. L’utilisateur a un maximum de 5 chances. Le programme vérifie que l’utilisateur a bien entré un nombre entre 0 et 100 et lui indique s’il gagne ou dans le cas contraire lui indique le nombre d’essais restant et lui redemande un nombre.
 
 Plan de test
 chiffre choisi     chiffre deviné      réponse                             chances
 45                 30                  "Votre nombre est trop petit."      4
                    50                  "Votre nombre est trop grand."      3
                    -10                 "Votre nombre doit être positif."   3
                    42                  "Votre nombre est trop petit."      2
                    45                  "Vous avez deviné le numéro !!"     1
 
Défi : Le programme pourrait indiquer si la valeur à trouver est plus grande ou plus petite que la dernière proposition que l'utilisateur a faite.
*/

#include<iostream>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    // Déclaration des variables
    int iRandom;
    int nombre;
    int chances = 0;
    int chance_restante = 5;
    
    // Initialisation du chiffre aléatoire
    srand(time(0));
    iRandom = rand() % 101;
    
    // Demande entrée d'un nombre à l'utilisateur
    cout << "Entrez un nombre entre 0 et 100: " << endl;
    cin >> nombre;
    
    while (chances < 4) {
        
        // Si le nombre entré égal le nombre aléatoire, le jeu s'arrête
        if (nombre == iRandom) {
            cout << "Vous avez deviné le numéro !!" << endl;
            break;
        }
        
        else {

            // Si le nombre entré doit être positif
            if (nombre < 0){
                cout << "Le nombre doit être positif." << endl;
                cout << "Entrez un nombre entre 0 et 100: " << endl;
                cin >> nombre;
            }
            
            // Si le nombre entré est plus petit que le nombre aléatoire,
            // le jeu se poursuit, avec une chance en moins.
            else if (nombre < iRandom){
                cout << "Votre nombre est trop petit" << endl;
                chance_restante --;
                cout << "Il vous reste " << chance_restante << " chance."<< endl;
                cout << "Entrez un nombre entre 0 et 100: " << endl;
                cin >> nombre;
            
                chances ++;
            }
            // Si le nombre entré est plus grand que le nombre aléatoire,
            // le jeu se poursuit, avec une chance en moins.
            else if (nombre > iRandom){
                cout << "Votre nombre est trop grand" << endl;
                chance_restante --;
                cout << "Il vous reste " << chance_restante << " chance."<< endl;
                cout << "Entrez un nombre entre 0 et 100: " << endl;
                cin >> nombre;
            
                // incrémentation des chances
                chances ++;
        }

        }
    
    }
    
    cout << "------------------------------------- " << endl;
    cout << "Le chiffre était " << iRandom << endl;

    
    return 0;
}




