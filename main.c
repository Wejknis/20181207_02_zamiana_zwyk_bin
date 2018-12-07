#include <stdio.h>

int main() {
    int liczba = 0;
    int index = 0;
    int tablica[200];
    int i;

    printf("Podaj liczbę dziesiętną: \n");
    scanf("%d", &liczba);

    do{
        tablica[index++] = liczba % 2;
        liczba /= 2;
    }while (liczba > 0);

    for (int i = index - 1; i >= 0; --i) {
        printf("%d", tablica[i]);
    }

    return 0;
}