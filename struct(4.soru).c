// (anlamdımm çalışmadı)Bir şirkette çalışan personeller için adı,maaşı ve doğum tarihi(yıl,ay,gün) şeklinde bilgiler tutulmaktadır.
// 5 personel için bu bilgiler alındıktan sonra yaşı 25-40 arası olanların adı soyadı,maaşı ve yaşını ekrana listeleyiniz.(içiçe struct kullanılmalıdır)

#include <stdio.h>
#include <time.h>
struct dogumyili
{
  int gun;
  int ay;
  int yil;
};
struct kisi
{
  char ad[10];
  char soyad[10];
  float maas;
  struct dogumyili dogum;
};
int yilhesapla(int dogumtarihi)
{
  int mevcutyil = 2025;
  return mevcutyil - dogumtarihi;
}
int main()
{
  struct kisi kisiler[5];
  for (int i = 0; i < 1; i++)
  {
    printf("ad : ");
    scanf("%s", kisiler[i].ad);
    printf("soyad :");
    scanf("%s", kisiler[i].soyad);
    printf("Maaş: ");
    scanf("%f", &kisiler[i].maas);
    printf("Doğum tarihi (yıl ay gün): ");
    scanf("%d %d %d", &kisiler[i].dogum.yil, &kisiler[i].dogum.ay, &kisiler[i].dogum.gun);
  }
  printf("\n25-40 yaş arasındaki personeller\n");
  for (int i = 0; i < 1; i++)
  {
    int yas = yilhesapla(kisiler[i].dogum.yil);
    if (yas >= 25 && yas <= 40)
    {
      printf("Adı: %s %s, Maaşı: %.2f, Yaşı: %d\n", kisiler[i].ad, kisiler[i].soyad, kisiler[i].maas, yas);
    }
  }

  return 0;
}