#include <stdio.h>
struct birth_year {
    int day;
    int month;
    int year;
};
struct person {
    char name[50];
    char surname[50];
    float salary;
    struct birth_year birth;
};
int calculate_year(int birthdate) {
    int current_year = 2025;
    return current_year - birthdate;
}
int main() {
    struct person persons[5];
    for (int i = 0; i < 5; i++) {
        printf("\n%d. Kişi Bilgilerini Giriniz\n", i + 1);
        printf("İsim: ");
        scanf("%s", persons[i].name);
        printf("Soyisim: ");
        scanf("%s", persons[i].surname);
        printf("Maaş: ");
        scanf("%f", &persons[i].salary);
        printf("Doğum Tarihi (Yıl Ay Gün): ");
        scanf("%d %d %d", &persons[i].birth.year, &persons[i].birth.month, &persons[i].birth.day);
    }
    printf("\n25-40 Yaş Arasındaki Çalışanlar:\n");
    for (int i = 0; i < 5; i++) {
        int age = calculate_year(persons[i].birth.year);
        if (age >= 25 && age <= 40) {
            printf("Ad: %s %s, Maaş: %.2f, Yaş: %d\n", persons[i].name, persons[i].surname, persons[i].salary, age);
        }
    }

    return 0;
}
