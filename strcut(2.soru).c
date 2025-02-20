// 2.soru => Bir sınıftaki 10 öğrenci için öğrenci no,vize ve final notları tutulacaktır. Bu işlem için dizinin her bir elemanında öğrencinin numarası,vize ve final notu olacak şekilde 10 elemanlı bir dizi oluşturulup değerleri kullanıcıdan alınacak ve bu dizi NotHesapla fonksiyonuna gönderilip her öğrencinin ortsı ve öğrenci numarası, ayrıca sınıfın genel not ortsı ekrana yazdırılacaktır.
#include <stdio.h>
struct notlar
{
    int ogrno;
    int vize;
    int final;
};
void hesapla(struct notlar not[])
{
    int sum = 0;
    printf("\nÖğrenci Notları ve Ortalamaları:\n");
    printf("--------------------------------\n");
    for (int i = 0; i < 5; i++)
    {
        float ort = (not[i].vize * 0.4) + (not[i].final * 0.6);
        sum += ort;
        printf("ogrno:%d\tort%.2f\n", not[i].ogrno, ort);
    }
    sum /= 10;
    printf("geneltoplam:%d", sum);
}
int main()
{
    struct notlar n[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nno\n", i + 1);
        printf("ogrno: ");
        scanf("%d", &n[i].ogrno);
        printf("vize:");
        scanf("%d", &n[i].vize);
        printf("final:");
        scanf("%d", &n[i].final);
    }
    hesapla(n);
    return 0;
}