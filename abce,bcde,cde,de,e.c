#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number of loops >>");
    scanf("%d", &a);
    int b=1;
    for(int i=1;i<=a;i++)
    {
        for(int j=i;j<=a;j++)
        {
            printf("%c ", j+64);
        }
        printf("\n");
    }
}