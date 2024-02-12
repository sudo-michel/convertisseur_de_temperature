#include <stdio.h>

//De Celsius à Fahrenheit
//De Fahrenheit à Celsius
//De Celsius à Kelvin
//De Kelvin à Celsius
//De Fahrenheit à Kelvin
//De Kelvin à Fahrenheit

int main() {
    printf("Quelle conversion souhait tu faire\n");
    printf("1. De Celsius vers Fahrenheit\n");
    printf("2. De Fahrenheit vers Celsius\n");
    printf("3. De Celsius vers Kelvin\n");
    printf("4. De Kelvin vers Celsius\n");
    printf("5. De Fahrenheit vers Kelvin\n");
    printf("6. De Kelvin vers Fahrenheit\n");

    int choix;
    scanf("%d", &choix);
    printf("Tu as choisi %d\n", choix);

    float temperature;
    printf("Quelle est la temperature a convertir ?\n");
    scanf("%f", &temperature);
    printf("Tu as choisi %f\n", temperature);

    float resultat;
    if (choix == 1) {
        resultat = temperature * 9 / 5 + 32;
        printf("La temperature en Fahrenheit est %f\n", resultat);
    } else if (choix == 2) {
        resultat = (temperature - 32) * 5 / 9;
        printf("La temperature en Celsius est %f\n", resultat);
    } else if (choix == 3) {
        resultat = temperature + 273.15;
        printf("La temperature en Kelvin est %f\n", resultat);
    } else if (choix == 4) {
        resultat = temperature - 273.15;
        printf("La temperature en Celsius est %f\n", resultat);
    } else if (choix == 5) {
        resultat = (temperature - 32) * 5 / 9 + 273.15;
        printf("La temperature en Kelvin est %f\n", resultat);
    } else if (choix == 6) {
        resultat = (temperature - 273.15) * 9 / 5 + 32;
        printf("La temperature en Fahrenheit est %f\n", resultat);
    } else {
        printf("Choix invalide\n");
    }

    return 0;
}
