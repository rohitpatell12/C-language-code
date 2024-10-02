#include<stdio.h>
int main(){
  FILE *fptr;
  fptr = fopen("Test.txt", "r");

  int ch;
  fscanf(fpdr,"%c",&ch);
  printf("character = %c\n", ch);
  fclose(fptr);
  return 0;
}