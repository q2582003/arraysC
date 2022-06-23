#include <stdio.h>
int main()
{
    float A[100];
    int n,i;
    do{
        printf("\n cho biet so phan tu cua mang:");
        scanf("%d",&n);
    }while(n>100 || n<=0);
    for(i=0;i<n;i++){
        printf("A[%d] = ",i);
        scanf("%f",&A[i]);
    }
    return 0;
}