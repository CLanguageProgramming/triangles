#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number of loops >>");
    scanf("%d", &a);
    for(int i=1;i<=a;i++)
    {
        int b=i;
        for(int j=1;j<=i;j++)
        {
            printf("%c ", b+64);
            b--;
        }
        printf("\n");
    }
}