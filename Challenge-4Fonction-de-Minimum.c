// Online C compiler to run C program online
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
        printf("le numero minimum est : %d",a);
    }
    else
    {
        printf("le numero grand est : %d",b);
    }



}
int main() {
    int v;
    int n;
   ft_maximum(v,n);
    return 0;
}
