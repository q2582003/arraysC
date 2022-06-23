// Tìm kiếm phần tử lớn nhất (nhỏ nhất)
//thuật toán
/* max = rainfall[0];
for(i=1;i<MONTHS;i++)
  if(rainfall[i]>max)
    max = rainfall[i];
  printf("\nLuong mua nhieu nhat la: %d", max); 
  dùng for
       int Table[100];  
       int N,i,k,f;//N:số phần tử, k phần tử cần tìm
       for(i =0;i<N;i++)
         if(Table[i]==k)break;
         if(i<N) printf("tim thay tai vi tri %d",i);
    dùng while
    i=0;f=0;//f: found f=1<=>k is found
    while(i<N && f ==0){
         if(Table[i]==k) f =1;
         else i++;
    }
    if(f==1) printf("tim thay tai vi tri %d",i);
 */
 //nhập vào dãy(<100) số tính và đưa ra màn hình
 //tổng và tích của dãy
 //các số chia hết cho 3 và lớn hơn 10
 //đếm các số nằm trong đoạn [100,1000)
#include <stdio.h>
int main()
{
    int A[100];
    int i,n,tong=0;
    double tich =1;
    printf("Nhap so phan tu cua day(<100): "); scanf("%d",&n);
    for(i =0;i<n;i++){
     printf("A[%d] =",i); scanf("%d", &A[i]);}
    
     for(i=0;i<n;i++)
       tong += A[i];
         
     {printf(" tong = %d \n ",tong);
     }
      for(i=0;i<n;i++)
      tich *=A[i];
      {
          printf(" tich = %f",tich);
      }
      for(i=0;i<n;i++)
       if(A[i]%3==0 && A[i] >10 ){
            printf("\n so chia het cho 3 va lon hon 10 la %d \n",A[i]);
       }
       int dem=0;
       for(i =0;i<n;i++)
         if(100<= A[i] && A[i] <1000)
          { printf("cac so nam trong khoang [100,1000) la:%d ",A[i]);
          }
         else
          { printf("khong co so nao nam trong doan [100,1000).");break;  }

       
return 0;

}