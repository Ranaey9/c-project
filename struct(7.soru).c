#include <stdio.h>
#include <stdlib.h>

struct hesapbilgileri
{
    char ad[50];
    int bakiye;
};

void hesapliste(int n, struct hesapbilgileri *musteri)
{
    int toplamBakiye = 0;
    printf("\n--- Müşteri Listesi ---\n");
    
    for (int i = 0; i < n; i++)
    {
        toplamBakiye += musteri[i].bakiye;
        printf("Müşteri Adı: %s\nBakiye: %d\n\n", musteri[i].ad, musteri[i].bakiye);
    }
    
    printf("Toplam Bakiye: %d\n", toplamBakiye);
}

int main()
{
    int n;
    printf("Kaç müşteri kaydedilecek? ");
    scanf("%d", &n);
    struct hesapbilgileri *musteri = (struct hesapbilgileri *)malloc(n * sizeof(struct hesapbilgileri));

    if (musteri == NULL) 
    {
        printf("Bellek tahsisi başarısız!\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n%d. Müşteri Adı: ", i + 1);
        scanf("%s", musteri[i].ad);
        
        printf("%d. Müşteri Bakiyesi: ", i + 1);
        scanf("%d", &musteri[i].bakiye);
    }
    hesapliste(n, musteri);
    free(musteri);

    return 0;
}
