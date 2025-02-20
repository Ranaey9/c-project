// 1.soru => Bir dikdörtgen için uzun ve kısa kenarın tutulduğu bir struct tanımlayınız. Kullanıcıdan alınan kenar değerlerine göre bir dikdörtgen oluşturup Hesapla fonksiyonuna göndererek alanını ve çevresini hesaplayınız.
#include <stdio.h>
struct dikdortgen
{
    int kısa;
    int uzun;
};
void yazdir(struct dikdortgen a)
{
    int alan = a.kısa * a.uzun;
    int cevre = 2 * (a.kısa + a.uzun);
    printf("alan:%d\ncevre:%d", alan, cevre);
}
int main()
{
    struct dikdortgen dik;
    printf("Uzun kenarı giriniz: ");
    scanf("%d", &dik.uzun);
    printf("Kısa kenarı giriniz: ");
    scanf("%d", &dik.kısa);
    yazdir(dik);
    return 0;
}