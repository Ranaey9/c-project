#include <stdio.h>
struct zaman
{
    int saat;
    int dk;
    int sn;
};
struct şimdikizaman
{
    int simdiki_saat;
    int simdiki_dk;
    int simdiki_sn;
};
void zmanhesapla(struct zaman süre, struct şimdikizaman şimdikisüre)
{

    if (süre.saat < 0 || süre.saat >= 24 || süre.dk < 0 || süre.dk >= 60 || süre.sn < 0 || süre.sn >= 60 ||
        şimdikisüre.simdiki_saat < 0 || şimdikisüre.simdiki_saat >= 24 || şimdikisüre.simdiki_dk < 0 ||
        şimdikisüre.simdiki_dk >= 60 || şimdikisüre.simdiki_sn < 0 || şimdikisüre.simdiki_sn >= 60)
    {
        printf("Hatalı zaman girişi\n");
        return;
    }
    int saat_fark, dk_fark, sn_fark;

    saat_fark = şimdikisüre.simdiki_saat - süre.saat;

    dk_fark = şimdikisüre.simdiki_dk - süre.dk;

    sn_fark = şimdikisüre.simdiki_sn - süre.sn;

    printf("İki zaman arasındaki fark: %d saat, %d dakika, %d saniye\n", saat_fark, dk_fark, sn_fark);
}
int main()
{
    struct zaman a;
    struct şimdikizaman b;
    printf("saat dk ve sn girin :\n");
    printf("saat girin:");
    scanf("%d", &a.saat);
    printf("dakika girin:");
    scanf("%d", &a.dk);
    printf("saniye girin:");
    scanf("%d", &a.sn);
    printf("şimdiki saat dk ve sn girin :\n");
    printf("saat girin:");
    scanf("%d", &b.simdiki_saat);
    printf("dakika girin:");
    scanf("%d", &b.simdiki_dk);
    printf("saniye girin:");
    scanf("%d", &b.simdiki_sn);
    zmanhesapla(a, b);
    return 0;
}
