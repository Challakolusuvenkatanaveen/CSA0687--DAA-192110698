#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter the first number ");
    scanf("%d",&n1);
    printf("Enter the first number ");
    scanf("%d",&n2);
    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d",n1);
}
