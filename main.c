#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void main()
{
    int num1, num2, sum;

FILE *fpointer;
fpointer=fopen("task_4c.txt","r");

fscanf(fpointer, "%d", &num1);
fscanf(fpointer, "%d", &num2);

sum = num1 + num2;

printf("first number  %d\n", num1);
printf("secound number %d\n", num2);
printf("Sum = %d\n\n", sum);
fclose(fpointer);

fpointer = fopen("task_4c.txt","a+");
fputs("The Sum = ", fpointer);
fprintf(fpointer, "%d\n", sum);
fclose(fpointer);

}
