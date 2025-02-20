// Kullanıcıdan doğum tarihi ve şimdiki tarihi gün,ay,yıl şeklinde ayrı ayrı 
// aldıktan sonra her iki tarih verisini YasHesapla isimli fonksiyona göndererek 
// kullanıcının yaşını gün,ay,yıl olarak yazdırınız.
#include <stdio.h>
struct dogumtarihi
{
 int gun;
 int ay;
 int yil; 
};
struct simdikitarih
{
   int simdiki_gun;
   int simdiki_ay;
   int simdiki_yil;
};
int yashesapla(struct dogumtarihi dogum, struct simdikitarih simdiki){
    int yas = simdiki.simdiki_yil - dogum.yil;
    if (dogum.ay>simdiki.simdiki_ay)
    {
       yas--;
    }
    
return yas;
}
int main(){
     struct dogumtarihi dogum1;
     struct simdikitarih tarih;
     printf("doğum tarihini gir:");
     scanf("%d%d%d",&dogum1.gun,&dogum1.ay,&dogum1.yil);
     printf("simdiki tarihi gir");
     scanf("%d%d%d",&tarih.simdiki_gun,&tarih.simdiki_ay,&tarih.simdiki_yil);
     int sonuc=yashesapla(dogum1, tarih);
printf("sonuc:%d",sonuc);
    return 0;
}