#include <stdio.h>
/*Napisz program, ktory poprosi o podanie kodu ASCII np.66 a nastepnie wyswietli znak odpowiadajacy temu kodowi*/
int main() {
    int liczba;
    printf("Podaj liczbe: \n");
    scanf("%d", &liczba);
    printf("Symbol %c", liczba);
    return 0;
}
