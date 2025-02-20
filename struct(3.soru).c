#include <stdio.h>

struct Complex
{
    float gercel;
    float sanal;
};

struct Complex ComplexAdd(struct Complex a, struct Complex b)
{
    struct Complex toplam;
    toplam.gercel = a.gercel + b.gercel;
    toplam.sanal = a.sanal + b.sanal;
    return toplam;
}

int main()
{
    struct Complex sayi1, sayi2, sonuc;

    printf("1. Karmaşık Sayının Gerçel ve Sanal Kısımlarını Giriniz: ");
    scanf("%f %f", &sayi1.gercel, &sayi1.sanal);

    printf("2. Karmaşık Sayının Gerçel ve Sanal Kısımlarını Giriniz: ");
    scanf("%f %f", &sayi2.gercel, &sayi2.sanal);

    sonuc = ComplexAdd(sayi1, sayi2);

    printf("\nToplam Karmaşık Sayı: %.2f + %.2fi\n", sonuc.gercel, sonuc.sanal);

    return 0;
}
