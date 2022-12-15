#include <stdio.h>
int main() {
   int i, j, rows,val,add;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   printf("Enter value: ");
   scanf("%d",&val);
   for (i = 1; i <= rows; ++i) {
        add=0;
        
      for (j = 1; j <= i; ++j) {
         printf("%d ",val);
         add+=val;
      }
      printf("= %d",add);
      printf("\n");
   }
   return 0;
}
