#include <stdlib.h>
#include <stdio.h>
#include <time.h> // 
#include <stdbool.h> // Pour "bool" / "false" / "true"
#include <string.h> 

int main() {
    bool hasNumber = false;
    srand(time(NULL));
    int nombre = rand() % (100 + 1 - 1); // sans le -1 le nombre pourrait être 101 (C'est dit sur le site dans le README)
    nombre += 1; // Au cas ou on tombe sur zéro, ca seras donc 1. (Ajoute +1 peut importe le nombre)

    // Générer le nombre aléatoire

    // printf("💡 - \033[33mTips\033[0m: Si vous avez besoin d'un indice, écrivez simplement '\033[33mindice\033[0m' dans le terminal.\n"); // TODO: Système d'indice

    while (!hasNumber) {
        int prediction;

        printf("Choisissez un nombre entre \033[36m1\033[0m et \033[36m100\033[0m : ");

        if (scanf("%d", &prediction) != 1) {
            printf("\033[31mUtilisez des caractères est strictement interdit.\033[0m\n"); // sinon le terminal es spam de la boucle et c'est très embêtant.
            exit (0);
        }

        if (prediction < 0 || prediction > 100) { // Condition permettant d'éviter que le joueur saissise des chiffres en dehors de 0-100
            printf("\033[31mVous ne pouvez pas donner un nombre inférieur à 0 ou supérieur à 100.\033[0m\n");
        }

        if (prediction < nombre) { // Condition permettant d'afficher "C'est plus" ou "C'est moins"
            printf("C'est plus !\n");
        } else if (prediction > nombre) {
            printf("C'est moins !\n");
        }

        if (prediction == nombre) { // Condition permettant de stopper le programme lorsque le joueur à trouver le nombre.
            printf("\033[32mFélicitation ! Vous avez trouver le nombre.\033[0m\n");
            hasNumber = true;
        }
        
    }
}