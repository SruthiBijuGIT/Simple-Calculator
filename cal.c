#include<stdio.h>    
int main()
{    
char operator;
double n1,n2;    
printf("Enter a operator (+,-,*,/):");    
scanf("%c",&operator);
printf("Enter two operands:");    
scanf("%lf %lf",&n1,&n2);
switch(operator)     
{
  case '+':    
    printf("%.1lf+%.1lf=%.1lf\n",n1,n2,n1+n2); 
    break;   
    
  case '-':    
    printf("%.1lf-%.1lf=%.1lf\n",n1,n2,n1-n2); 
    break;

  case '*':   
    printf("%.1lf*%.1lf=%.1lf\n",n1,n2,n1*n2); 
    break;   
  case '/':    
    printf("%.1lf/%.1lf=%.1lf\n",n1,n2,n1/n2); 
    break;      
    
  default:
    printf("ERROR\n"); 
  }
  return 0;
}
