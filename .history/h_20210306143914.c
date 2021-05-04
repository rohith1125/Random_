#include<stdio.h>

int fact(int num)
{
    int fact = 1;

    while(num > 0)
    {
        fact *= num;
        num--;
    }

    return fact;
}
int per(int n, int r)
{
    int y;
    y = fact(n) / fact(n-r);
    return y;
}

int com(int n, int r)
{
    int x;
    x = fact(n) / ((fact(n-r))*(fact(r)));
    return x;
}
int main()
{    
    int n,r,x,y;
    char o;

    printf("\n");
    printf("P is Permutation\t");
    printf("C is Combination\n");

    printf("Operation You Want To Perform (P/C)?\n");
    scanf("%c",&o);
    
    printf("Enter n: ");
    scanf("%d", &n);
    printf("\n");
    printf("Enter r: ");
    scanf("%d", &r);
    printf("\n");
    x = per(n, r);
    y = com(n, r);
    printf("\n");
    switch (o)
    {
    case 'P':
        printf("Permutation is = %d\n", x); 
        break;
    case 'p':
        printf("Permutation is = %d\n", x); 
        break;
    case 'C':
        printf("Combination is = %d", y);
        break;
        case 'c':
        printf("Combination is = %d", y);
        break;
    default:
        break;
    }
    return 0;
}