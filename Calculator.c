/*A-Nony-Mus
12 Mar. 2012
This program is a simple calculator*/

#include <stdio.h>
#include <math.h>

void scan_data(char *x, double *y);
void do_next_op(char x, double y, double *z);

int main(void)
{
double accumulator,
	operand;
char operator,
	trash;

accumulator = 0;
do{
scan_data(&operator, &operand);
do_next_op(operator, operand, &accumulator);
printf("result so far is %4.2f\n", accumulator);
}while(operator != 'q');

return(0);
}

void scan_data(char *x, double *y)
{
char trash;
printf("input the desired operation (ex. + 5.0) ");
scanf("%c", x);
if(*x != 'q')
scanf("%lf%c", y, &trash);
}

void do_next_op(char x, double y, double *z)
{
switch(x){
case '+':
*z += y;
break;
case '-':
*z -= y;
break;
case '*':
*z *= y;
break;
case '/':
*z /= y;
break;
case '^':
*z = pow(*z, y);
break;
}
}
