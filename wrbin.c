#include <stdio.h>
#include <string.h>

unsigned char chr;

void decimalToBinary(int num) {   
    if (num == 0) {
        printf("0");
        return;
    }
   
   // Stores binary representation of number.
   int binaryNum[32]; // Assuming 32 bit integer.
   int i=0;
   
   for ( ;num > 0; ){
      binaryNum[i++] = num % 2;
      num /= 2;
   }
   
   // Printing array in reverse order.
   for (int j = i-1; j >= 0; j--)
      printf("%d", binaryNum[j]);
}

/* int main() {
   int num = 9;
   decimalToBinary(num);
   return 0;
} */

int main(int argc, char * argv[]) {
    if (argc < 2) {
        printf("\nNeed at least one argument! Exiting...\n\n");
        return(-1);
    }

    printf("\nString = %s\n", argv[1]);

    for(int i = 0; i < strlen(argv[1]); i++) {

        chr =  argv[1][i];

        //printf("Tecken: %d = %c. ", i, chr);
        //printf("Tecken: %d = %d i ASCII.\n", i, chr);

        decimalToBinary((int) chr);
    }
}