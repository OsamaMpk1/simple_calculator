#include <stdio.h>
#include <conio.h>

void main(){
 int num_1,num_2;
 char q_str, op;
 float ans;
 start_1:
  clrscr();
  printf("Enter Value: ");
  scanf("%d", &num_1);
  printf("Enter Value: ");
  scanf("%d", &num_2);
  printf("Select operation: ");
  op = getche();
  start_2:
   printf("\n");
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
    default:
     printf("Enter Valid operator eg. +,*,-,/");
     printf("\nselect operator again: ");
     op = getche();
     goto start_2;
   }
  printf("\nWant to calculate again press (y) otherwise (n): ");
  q_str = getche();
  if(q_str == 'y'){
   goto start_1;
  }
  printf("\nYou entered %c so we terminate the program Good, bye: ");
  getche();
}