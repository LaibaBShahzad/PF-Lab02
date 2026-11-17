#include <stdio.h>
void cal_pattern(int i,int j,int n, char symbol);
void welcome();
int main() {

    int i=1,j,n,pattern_printer;
    char symbol;
     printf("Enter the number of rows: ");
    scanf("%d",&n);
    
    printf("Enter symbol: ");
    scanf(" %c",&symbol);
    
    welcome();
    cal_pattern(i,j,n,symbol);
    welcome();
    return 0;
}
void cal_pattern(int i, int j,int n,char symbol)
{
    
    for(i=1; i<=n; i++)
        {
            for(j=1;j<=n; j++)
                {
                    printf("%c",symbol);
                }
        printf("\n");
        }
}

void welcome()
{
    printf("----------------------------\n");
    printf("    PATTERN PRINTER v1.0     \n");
    printf("----------------------------\n");
}