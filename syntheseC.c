//Liste des commande utilisé, leur explications et leur utilisations :


_______________________________________________________________________________________________________________________
//printf : Cette commande est utilisée pour afficher des données à l'écran. 
//Elle permet de formater et d'imprimer du texte, des variables et des constantes.

#include <stdio.h>

int main() {
    int num = 10;
    printf("La valeur de num est : %d\n", num);
    return 0;
}
_______________________________________________________________________________________________________________________
//scanf : Cette commande est utilisée pour lire des données à partir de l'entrée standard (souvent le clavier). 
//Elle permet de récupérer des valeurs entrées par l'utilisateur et de les stocker dans des variables.

#include <stdio.h>

int main() {
    int age;
    printf("Entrez votre âge : ");
    scanf("%d", &age);
    printf("Vous avez %d ans.\n", age);
    return 0;
}
_______________________________________________________________________________________________________________________
//if : Cette commande est utilisée pour exécuter une certaine partie du code seulement si une condition est vraie. 
//Elle permet de réaliser des branchements conditionnels.

#include <stdio.h>

int main() {
    int num = 5;
    if (num > 0) {
        printf("Le nombre est positif.\n");
    }
    return 0;
}
_______________________________________________________________________________________________________________________
//else : Cette commande est utilisée en conjonction avec if. 
//Si la condition de l'if est fausse, le bloc de code situé après else sera exécuté.
	
#include <stdio.h>

int main() {
    int num = -2;
    if (num > 0) {
        printf("Le nombre est positif.\n");
    } else {
        printf("Le nombre est négatif ou nul.\n");
    }
    return 0;
}
_______________________________________________________________________________________________________________________
//for : Cette commande permet d'effectuer une boucle avec une structure prédéfinie. 
//Elle se compose d'une initialisation, d'une condition de continuation et d'une instruction d'incrémentation.
											
#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
_______________________________________________________________________________________________________________________
//while : Cette commande permet d'exécuter un bloc de code tant qu'une condition spécifiée est vraie. 
//Elle vérifie la condition avant d'exécuter le bloc de code.
														       
#include <stdio.h>

int main() {
    int count = 0;
    while (count < 5) {
        printf("%d ", count);
        count++;
    }
    printf("\n");
    return 0;
}
_______________________________________________________________________________________________________________________
//do-while : Cette commande est similaire à while, mais elle vérifie la condition après avoir exécuté le bloc de code. 
//Ainsi, le bloc de code sera exécuté au moins une fois, même si la condition est fausse.
														       
#include <stdio.h>

int main() {
    int count = 0;
    do {
        printf("%d ", count);
        count++;
    } while (count < 5);
    printf("\n");
    return 0;
}
_______________________________________________________________________________________________________________________
//switch : Cette commande est utilisée pour effectuer une sélection multiple. 
//Elle permet de comparer une expression à une liste de cas et d'exécuter le bloc de code correspondant à la première correspondance.
														       
#include <stdio.h>

int main() {
    int choice = 2;
    switch (choice) {
        case 1:
            printf("Choix 1\n");
            break;
        case 2:
            printf("Choix 2\n");
            break;
        case 3:
            printf("Choix 3\n");
            break;
        default:
            printf("Choix non valide\n");
    }
    return 0;
}
_______________________________________________________________________________________________________________________
//break : Cette commande est utilisée pour sortir d'une boucle (for, while, do-while) ou d'un bloc switch.
														       
#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        if (i == 3) {
            break;
        }
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
_______________________________________________________________________________________________________________________
//continue : Cette commande est utilisée pour sauter le reste du code dans une itération donnée d'une boucle 
//et passer à l'itération suivante.
														       
#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        if (i == 2) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
_______________________________________________________________________________________________________________________
//return : Cette commande est utilisée pour renvoyer une valeur depuis une fonction. 
//Elle met fin à l'exécution de la fonction et renvoie la valeur spécifiée.
														       
#include <stdio.h>

int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int sum = addNumbers(3, 5);
    printf("La somme est : %d\n", sum);
    return 0;
}
_______________________________________________________________________________________________________________________
//typedef : Cette commande est utilisée pour créer des alias de types de données existants. 
//Elle permet de définir des noms plus conviviaux pour des types de données complexes.
														       
#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

int main() {
    Point p;
    p.x = 3;
    p.y = 5;
    printf("Coordonnées : (%d, %d)\n", p.x, p.y);
    return 0;
}
_______________________________________________________________________________________________________________________
//struct : Cette commande est utilisée pour créer une structure de données personnalisée. 
//Elle permet de regrouper des variables de différents types dans une seule entité.
														       
#include <stdio.h>

struct Person {
    char name[20];
    int age;
};

int main() {
    struct Person person1;
    strcpy(person1.name, "Alice");
    person1.age = 25;
    printf("Nom : %s, Age : %d\n", person1.name, person1.age);
    return 0;
}
_______________________________________________________________________________________________________________________
//enum : Cette commande est utilisée pour définir une énumération. 
//Elle permet de créer un ensemble de constantes symboliques.
														       
#include <stdio.h>

enum Days {MON, TUE, WED, THU, FRI, SAT, SUN};

int main() {
    enum Days today = WED;
    printf("Aujourd'hui est le jour numéro : %d\n", today);
    return 0;
}
_______________________________________________________________________________________________________________________
//sizeof : Cette commande est utilisée pour obtenir la taille en octets d'un type de données ou d'une variable.
														       
#include <stdio.h>

int main() {
    int num = 10;
    printf("La taille de num est : %d octets\n", sizeof(num));
    return 0;
}
_______________________________________________________________________________________________________________________


//Il existe encore d'autres commandes, mais celles-ci sont les principales. 
//Les connaitres est un atout considérable pour apprendre le langage C

