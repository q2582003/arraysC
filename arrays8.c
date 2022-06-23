/*Nhập vào từ bàn phím một dãy số nguyên (<100 phần
tử). Sắp xếp dãy theo nguyên tắc: Bên trên là số chẵn
chia hết cho 3. Bên duới là số lẻ chia hết cho 3. Giữa là
các số còn lại. Đưa cả 2 dãy ra màn hình.*/
#include <stdio.h>
int main()
{
    int A[100];
    int N,i;
    //nhap du lieu
    printf("Nhap so phan tu mang: "); scanf("%d",&N);
    printf("\nHay nhap day so: \n");
    for(i=0;i<N;i++){
        printf("A[%d]= ",i); scanf("%d", &A[i]);
    }
    for(i=0;i<N;i++)
    printf("%4d",A[i]);
    printf("\n");
    //
    {
           int d =0,t;
        
        for(i=0;i<N;i++)
          if(A[i]%6==0){
              t = A[i]; 
              A[i]=A[d];
              A[d]=t;
              d++;
               printf("%4d",t);    
          } printf("\n\n");
        for(i=d;i<N;i++)
          if(A[i]%3 !=0){
              t =A[i];
              A[i]=A[d];
              A[d]=t;
              d++;  printf("%4d",t);
          } printf("\n");
         for(i=d;i<N;i++)
          if(A[i]%3==0 && A[i]%2 != 0){
            t = A[i];
            A[i]=A[d];
            A[d]=t;
            d++; printf("%4d",t);  
          }

        
    }
     
    
return 0;
}
