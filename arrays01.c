//nhập vào lượng mưa trong năm
#include <stdio.h>
#define MONTHS 12
int main()
{
  int rainfall[MONTHS], i;
     for( i = 0; i < MONTHS; i++)
     {
         printf("nhap luong mua thang %d:",i+1);
          scanf("%d",&rainfall[i]);

     }
     return 0;
}