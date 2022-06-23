//nhập và đưa ra màn hình 1 ma trân
#include <stdio.h>
int main()
{
    /*int A[20][20],n,m,i,j;
    printf("nhap so hang: ");
    scanf("%d",&n);
    printf("nhap so cot: ");
    scanf("%d", &m);
    printf("\n");
    for(i = 0;i<n;i++)
      for(j=0; j<m;j++){
          printf("Nhap phan tu A[%d,%d]: ",i+1,j+1);
          scanf("%d", &A[i][j]);

      }
      printf("\n\n Ma tran da nhap\n\n ");
      for( i=0; i<n; i++){
          for(j=0;j<m; j++)
        printf("%4d",A[i][j]);
        printf("\n");
      }*/
int A[10]={-1,5,-2,7,3,-10,9,0,-1,7};
int i,j,k;
for(i=1;i<10;i++)
   for(j=9;j>=1;j--)
     if(A[j]<A[j-1]){
       k = A[j];
       A[j-1]=A[j];
       A[j]=k;
      
     }
      printf("%d",A[4]);
        return 0;
}