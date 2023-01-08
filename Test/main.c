#include <stdio.h>

int main() {
    char reponseBinaire; // caractère pour stocker la réponse

    printf("\nVoulez-vous tourné votre carte ? (o = oui // n = non)\n");
    while (1) {
        scanf("%c", &reponseBinaire);
        if (reponseBinaire == 'O' || reponseBinaire == 'o' || reponseBinaire == 'N' || reponseBinaire == 'n') {
            break; // sortie de la boucle
        }
        while (getchar() != '\n'); // vide le tampon
        printf("Reessayez :\n");
    }

    return 0;
}
