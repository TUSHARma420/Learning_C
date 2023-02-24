#include <stdio.h>
#include <string.h>
struct address
{
    char city[100];
    int pin;
};
typedef struct studentDet
{
    char name[50];
    int prn;
    char branch[50];
    int marks;
    struct address add;
} details;
details students[100];
int main()
{
    int choice, i;
    printf("Enter total number of STUDENT details:\n");
    scanf("%d", &choice);
    for (i = 0; i < choice; i++)
    {
        printf("Enter STUDENT details for STUDENT %d:\n", i + 1);
        printf("Enter name of STUDENT> %d\n", i + 1);
        scanf("%s", &students[i].name);
        printf("Enter PRN of STUDENT> %d\n", i + 1);
        scanf("%d", &students[i].prn);
        printf("Enter branch of STUDENT> %d\n", i + 1);
        scanf("%s", &students[i].branch);
        printf("Enter marks of STUDENT> %d\n", i + 1);
        scanf("%d", &students[i].marks);
        printf("Enter city of STUDENT> %d\n", i + 1);
        scanf("%s", &students[i].add.city);
        printf("Enter pin of STUDENT> %d\n", i + 1);
        scanf("%d", &students[i].add.pin);
        printf("\n");
    }
    for (i = 0; i < choice; i++)
    {
        printf("The student details of student %d are:\n", i + 1);
        printf("Name:%s\n", students[i].name);
        printf("PRN:%d\n", students[i].prn);
        printf("Branch:%s\n", students[i].branch);
        printf("Marks:%d\n", students[i].marks);
        printf("City:%s\n", students[i].add.city);
        printf("PIN Code:%d\n", students[i].add.pin);
        printf("\n");
    }
    return 0;
}