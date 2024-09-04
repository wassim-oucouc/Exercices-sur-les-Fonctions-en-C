#include <stdio.h>

int   ft_multi(int a,int b)
{
    int c;
    printf("entrer le numero 1 :");
    scanf("%d",&a);
    printf("entrer le numero 2 : ");
    scanf("%d",&b);

    c = a * b;
    printf("la Multiplication est %d",c);



}
int main() {
    int v;
    int n;
   ft_multi(v,n);
    return 0;
}
