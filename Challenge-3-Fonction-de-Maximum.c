#include <stdio.h>

int   ft_maximum(int a,int b)
{
    int c;
    printf("entrer le numero 1 :");
    scanf("%d",&a);
    printf("entrer le numero 2 : ");
    scanf("%d",&b);

    if(a < b)
    {
        printf("le numero grand est : %d",b);
    }
    else
    {
        printf("le numero grand est : %d",a);
    }



}
int main() {
    int v;
    int n;
   ft_maximum(v,n);
    return 0;
}
