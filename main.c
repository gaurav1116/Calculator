#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    printf("Enter 1 for Addition,2 for Difference,3 for Product,4 for Division,5 for Modulus\n");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
        printf("Sum of %d and %d is %d",a,b,a+b);
        break;
    case 2:
        printf("Difference of %d and %d is %d",a,b,a-b);
        break;
    case 3:
        printf("Product of %d and %d is %d",a,b,a*b);
        break;
    case 4:
        printf("Division of %d and %d is %d",a,b,a/b);
        break;
    case 5:
        printf("Modulus of %d and %d is %d",a,b,a%b);
        break;
    default:
        printf("Invalid input");
        break;
    }
    return 0;
}
