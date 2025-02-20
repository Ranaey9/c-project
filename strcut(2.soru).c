#include <stdio.h>
struct notes
{
    int student_number;
    int visa;
    int final;
};
void calculate(struct notes note[])
{
    int sum = 0;
    printf("\nStudent Grades and Averages:\n");
    printf("--------------------------------\n");
    for (int i = 0; i < 5; i++)
    {
        float average = (note[i].visa * 0.4) + (note[i].final * 0.6);
        sum += average;
        printf("student_number:%d\tort%.2f\n", note[i].student_number, average);
    }
    sum /= 10;
    printf("grand total:%d", sum);
}
int main()
{
    struct notes n[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nno\n", i + 1);
        printf("student_number: ");
        scanf("%d", &n[i].student_number);
        printf("visa:");
        scanf("%d", &n[i].visa);
        printf("final:");
        scanf("%d", &n[i].final);
    }
    calculate(n);
    return 0;
}
