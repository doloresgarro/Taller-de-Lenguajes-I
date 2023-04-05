#include <stdio.h>
int main(){
   int i;
   for (i = 0; i <= 50; i+=5){
    if (i % 5 == 0)
      printf("i = %d\n", i);
    }
    return 0;
}
