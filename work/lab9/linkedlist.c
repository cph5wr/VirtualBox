/* Colin Harfst
cph5wr
lab section 103
17 November 2016 */

#include <stdio.h>
#include <stdlib.h>
int main() {
  printf("Enter how many values to input: ");
  int size;
  scanf("%d", &size);
  int i;
  int* p;
  p=(int*) malloc(sizeof(int)*size);
  for (i=0;i<size;i++) {
    printf("Enter value %d: ", i+1);
    scanf("%d", &(p[i]));
  }
  int j;
  for (j=size;j>0;j--)
    printf("%d\n", p[j-1]);
}
