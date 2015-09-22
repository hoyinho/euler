#include <stdio.h>
#include <stdlib.h>

int evenFib(){
  int fibs[100];
  fibs[0] = 1;
  fibs[1] = 2;
  int counter;
  int sum = 2;
  for (counter = 2; fibs[counter-1] < 4000000; counter++){
    fibs[counter] = fibs[counter - 1] + fibs[counter - 2];
    if (fibs[counter]%2 == 0){
      sum += fibs[counter];
    }
  }
  return sum;
}

int multiple3and5(){
  int sums = 0;
  int counter;
  for (counter = 3; counter < 1000; counter++){
    if (counter%3 == 0 || counter%5 == 0)
      sums+= counter;
  }
  return sums;
}

int main(){
  printf("This is the sum of all multiples of 3 or 5 up to 1000: %d\n" , multiple3and5());
  printf("This is the sum of all even fibonacci numbers less than 4,000,000: %d\n" , evenFib());
}
