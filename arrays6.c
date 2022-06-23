// nhập vào một dãy số tìm số chắn nhỏ nhất của dãy
#include <stdio.h>
int main()
{
    int A[100];
    int n,min,i;
    printf("\n Nhap so phan tu cua day: "); scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("A[%d]= ",i);
        scanf("%d",&A[i]);
    }
      min = A[0];
          for(i=0;i<n;i++)
          if(min>A[i] && A[i]%2==0)
          
         
              min = A[i];
         printf("so chan nho nhat la %d",min);

   return 0;

}