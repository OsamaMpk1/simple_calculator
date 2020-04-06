#include <stdio.h>
#include <conio.h>
// main funcion necessary for every c program func type void, param void
void main(void){

// variable declaration
 int num_1,num_2;
 char q_str, op;
 float ans;
 // First stage of program
 start_1:
  clrscr();
  printf("Enter Value: ");
  // user enter values for num_1, num_2
  scanf("%d", &num_1);
  printf("Enter Value: ");
  scanf("%d", &num_2);
  // Getting the Arithmetic operat for calculation
  printf("Select operation: ");
  op = getche();
  // Second stage of program
  start_2:
   printf("\n");
   // using switch to perform caclulation
   switch( op ){
    case '+':
     ans = num_1 + num_2;
     printf("Addition of %d & %d is %f", num_1, num_2, ans);
     break;
    case '-':
     ans = num_1 - num_2;
     printf("Subtracting %d form %d is %f", num_2, num_1, ans);
     break;
    case '/':
     ans = num_1 / num_2;
     printf("Dividing %d on %d is %f", num_1, num_2, ans);
     break;
    case '*':
     ans = num_1 * num_2;
     printf("Multiplying %d with %d is %f", num_1, num_2, ans);
     break;
     // default case incase of invalid operator loop till correct ope is entered
    default:
     printf("Enter Valid operator eg. +,*,-,/");
     printf("\nselect operator again: ");
     op = getche();
     goto start_2;
   }
  // Second round of program  
  printf("\nWant to calculate again press (y) otherwise (n): ");
  q_str = getche();
  // repeat if user press ( y )
  if(q_str == 'y'){
   goto start_1;
  }
  // if user enter other than ( y )
  printf("\nYou entered %c so we terminate the program Good, bye: ");
  getche();
}
