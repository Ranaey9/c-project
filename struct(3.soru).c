// (!!!!)3.soru => Kullanıcıdan gerçel ve sanal değerleri alınan
// 2 karmaşık sayı parametre olarak ComplexAdd fonksiyonuna gönderilecek ve toplam sonucu karmaşık sayı tipinde döndürülüp main’de yazdırılacaktır.
#include <stdio.h>
struct complex
{
    float gercel;
    float sanal;
};

struct complex topla(struct complex a, struct complex b)
{
    struct complex toplam;
    toplam.gercel = a.gercel + b.gercel;
    toplam.sanal = a.sanal + b.sanal;
    return toplam;
}
int main()
{
    struct complex sayi1 = {3.2, 4.5};
    struct complex sayi2 = {1.8, -2.3};

    struct complex sonuc = topla(sayi1, sayi2);

    printf("Birinci: %fi + %f \n", sayi1.sanal, sayi1.gercel);
    printf("İkinci: %fi + %f \n", sayi2.sanal, sayi2.gercel);
    printf("Toplam: %fi + %f \n", sonuc.sanal, sonuc.gercel);


    return 0;
}