/*
    A
   AB
  ABC
 ABCD
ABCDE
*/
  
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the numbers of rows >>");
    scanf("%d", &a);
    getchar();
    printf("Enter Any Alphabet >>");
    char b;
    scanf("%c", &b);
    int cal=1;
    for(int c=1;c<=a;c++)
    {
        for(int d=a;d>cal;d--)
        {
            printf(" ");
        }
        for(int e=1;e<=cal;e++)
        {
            printf("%c", e+64);
        }
        cal++;
        printf("\n");
    }
    getchar();
}

  
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the numbers of rows >>");
    scanf("%d", &a);
    getchar();
    printf("Enter Any Alphabet >>");
    char b;
    scanf("%c", &b);
    int cal=1;
    for(int c=1;c<=a;c++)
    {
        for(int d=a;d>cal;d--)
        {
            printf(" ");
        }
        for(int e=1;e<=cal;e++)
        {
            printf("%c", cal+64);
        }
        cal++;
        printf("\n");
    }
    getchar();
}