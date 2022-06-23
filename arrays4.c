//nhập mảng đưa ra TBC các số chia hết cho 7
//thuật toán
/* int dem =0;
for(i=0;i<MONTHS;i++)
  if(rainfall[i]>50)
    dem++;
    printf("\n thang mua nhieu hơn 50mm: %d",dem);*/
#include <stdio.h>
int main()
{
    int A[100];
    int n,i,d=0,S=0;
    printf("\n So phan tu cua mang(<100): "); scanf("%d",&n);
    for(i =0;i<n;i++){
        printf("A[%d] =",i); scanf("%d",&A[i]);

    }
    for(i = 0;i<n;i++)
    if(A[i] % 7==0){
        d++;
        S+=A[i];

    }
    if(d>0)
    printf("TBC so chia het cho 7: %7.2f", (float)S/d);
    else 
    printf("Trong day khong co so chia het cho 7");
    return 0;
}