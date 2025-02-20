// Bir banka için müşteri hesap bilgileri(müşteri adı,bakiyesi) kaydedilecektir. Kullanıcıdan alınan
// n sayısına göre n adet müşteriyi pointer kullanarak oluşturunuz ve her müşterinin adını ve bakiyesini kullanıcıdan alınız.
// HesapListele fonksiyonunu kullanarak bankadaki müşterilerin adını ve bakiyesini listeledikten sonra tüm müşterilerin toplam bakiyesini yazdırınız.
#include <stdio.h>
#include <stdlib.h>
struct hesapbilgileri
{
    char ad[50];
    int bakiye;
};
void hesapliste(int n, struct hesapbilgileri *musteri)
{
    int sum = 0;
    printf("\n Müşteri Listesi\n");
    for (int i = 0; i < n; i++)
    {
        sum += (musteri + i)->bakiye;
        printf("Müşteri Adı: %s\nBakiye: %d\n", (musteri + i)->ad, (musteri + i)->bakiye);
    }
    printf("\nToplam bakiye: %d\n", sum);
}
int main()
{
    int n;
    printf("n adet sayısını gir: ");
    scanf("%d", &n);
    struct hesapbilgileri *musteri = (struct hesapbilgileri *)malloc(sizeof(struct hesapbilgileri));
    for (int i = 0; i < n; i++)
    {
        printf("ad gir");
        scanf("%s", (musteri + i)->ad);
        printf("bakiye gir");
        scanf("%d", &(musteri + i)->bakiye);
    }
    hesapliste(n, musteri);
    free(musteri);
    return 0;
}