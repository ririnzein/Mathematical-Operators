#include <stdio.h>

int main ()
{
    int angka1 = 30;
    int angka2 = 40;
    int angka3 = 25;
    int angka4 = 30;
    int angka5 = 25;
    int angka6 = 15;

    int penjumlahan = angka1 + angka2 + angka3 + angka5;
    printf("%d\n", penjumlahan);

    int perkalian = angka4 * angka1 * angka5 * angka6;
    printf("%d\n", perkalian);

    int pengurangan = angka1 - angka5 - angka2 - angka4;
    printf("%d\n", pengurangan);

    int pembagian = angka1 / angka2 / angka4;
    printf("%d\n", pembagian);

    return 0;
}
