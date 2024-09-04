#include <stdio.h>

int ft_somme(int a,int b)
{
    int c;
    printf("entrer le numero 1 :");
    scanf("%d",&a);
    printf("entrer le numero 2 : ");
    scanf("%d",&b);

    c = a + b;
    printf("la somme est %d",c);



}
int main() {
    int v;
    int n;
   ft_somme(v,n);
    return 0;
}
