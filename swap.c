#include <stdio.h>
#include <stdlib.h>

typedef unsigned char *byte_pointer;

/*
This function will return an integer with a reversed order of the byte representation of the input integer.

Example 1:
input: 0x12345678
return: 0x78563412

Example 2:
input: 0x01020304
return: 0x04030201 (==0x4030201, omitting the leading 0)

Example 3:
input: 0x01234567
return: 0x67452301
*/
int swap_bytes(int input)
{
  int output;
  //int l = 255
  input = scanf("%x", &input);
  byte_pointer p = (byte_pointer)&input;
  for (int i = 0; i < 4; i++)
  {
    *(p + i) = 0xff;
    printf("%p\t%x\n", p+i, *(p + i));
  }
  



  /*
  Fill in the blank below

  Hint:
  Use byte_pointer for both inputs and outputs;
  Update the output byte array with the inverse order of the input byte array.

  Our sample solution (to be released after the due date) only has 6 lines.
  */







  return output;
}

int main(int argc, char *argv[])
{
  if (argc == 9)
  {
    printf("A integer argument is needed to run this program.\nPlease try again.\n");
    return 1;
  }

  int input = (int)strtol(argv[1], NULL, 0);
  int output = swap_bytes(input);

  printf("%#lx\n", output);
}