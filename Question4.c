#include<stdio.h>
#include<math.h>
int main()

{
int choice, finalresults, a, b;
double x, y;
double results, i;
//This function displays calculator function options which the user can choose from depending on what he or she wishes to calculate.
printf("1.addition\n");
printf("2.subtraction\n");
printf("3.multiplicaion\n");
printf("4.division\n");
printf("5.modulus\n");
printf("6.power\n");
printf("7.square\n");
printf("8.squareroot\n");
printf("9.cube\n");
printf("10.factorial\n");
printf("11.SIN\n");
printf("12.COS\n");
printf("13.TAN\n");
printf("14.log10\n");
printf("15.percentage\n");

//This function prompts the user to choose an option from the ones displayed on the screen.
printf("please choose what you want to begin with  ");
scanf("%d",&choice);
switch (choice)
{
case 1:
//this function promtps the user to enter any two numbers to add of their choice.
    printf("addition\n");
    printf("please enter the value of x\n");
    scanf("%lf",&x);
    printf("please enter the value of y\n");
    scanf("%lf",&y);
    results = x + y;
    printf("%.0lf + %.0lf=%.2lf",x,y,results);
    printf("the answer is %.2lf",results);
    
    break;
case 2:
//this function promtps the user to enter the two numbers to subtract  of their choice.
    printf("subtraction\n");
    printf("please enter the value of x\n");
    scanf("%lf",&x);
    printf("please enter the value of y\n");
    scanf("%lf",&y);
    results = x - y;
    printf("%.0lf - %.0lf=%.2lf\n",x,y,results);
    printf("the answer is %.2lf",results);
    
    break;

case 3:
//this function promtps the user to enter any  two numbers to multiply of their choice.
    printf("multiplication\n");
    printf("please enter the value of x\n");
    scanf("%lf",&x);
    printf("please enter the value of y\n");
    scanf("%lf",&y);
    results = x * y;
    printf("%.0lf * %.0lf=%.2lf",x,y,results);
    printf("the answer is %.2lf",results);
    
    break;
case 4:
//this function promtps the user to enter any two numbers to divide  of their choice.
    printf("division\n");
    printf("please enter the value of x\n");
    scanf("%lf",&x);
    printf("please enter the value of y\n");
    scanf("%lf",&y);
    results = x / y;
    printf("%.0lf / %.0lf=%.2lf",x,y,results);
    printf("the answer is %.2lf",results);
    
    break;
case 5:
//this function promtps the user to enter any two numbers of their choice he or she wants to find the modulus for.
    printf("modulus\n");
    printf("please enter the value of a\n");
    scanf("%d",&a);
    printf("please enter the value of b\n");
    scanf("%d",&b);
    finalresults = a % b;
    printf("the answer is %i", finalresults);
    break;
case 6:
//this function promtps the user to enter any number as the base number and a second number as the power of their choice
    printf("power\n");
    printf("please enter the base value :\n");
    scanf("%lf",&x);
    printf("please enter the power value :\n");
    scanf("%lf",&y);
    results =  pow(x,y);
    printf("%.0lf^ %.0lf=%.2lf\n",x,y,results);
    printf("the answer is %.2lf",results);
    
    break;
case 7:
//this function promtps the user to enter any number  to be squared of their choice.
    printf("square\n");
    printf("please enter the value of x:\n");
    scanf("%lf",&x);
    results = pow(x,2);
    printf("%.0lf ^2=%.2lf\n",x,results);
    printf("the answer is %.2lf",results);
    
    break;
case 8:
//this function promtps the user to enter any number to be squarerooted of their choice.
    printf("squareroot\n");
    printf("please enter the value of x\n");
    scanf("%lf",&x);
    results=sqrt(x);
    printf("the squareroot of %.0lf=%.2lf\n",x,results);
    printf("the answer is %.2lf\n",results);
    
    break;
case 9:
//this function promtps the user to enter any number to be cubed of their choice.
    printf("cube\n");
    printf("please enter the value of x\n");
    scanf("%lf",&x);
    results = pow(x,3);
    printf("%.0lf^3=%.2lf\n",x,results);
    printf("the answer is %.2lf",results);
    break;
case 10:
//this function promtps the user to enter any number of their choice they want to find the factorial of.
    printf("factorial\n");
    printf("please enter the value of x\n");
    scanf("%lf",&x);
    results = 1;
    for(i=1;i<=x;i++)
    results=results*i;
    printf("results = %.2lf\n",results);
    printf("the answer is %.2lf",results);
    break;
case 11:
//this function promtps the user to enter any number of their choice to which they wish to find the SIN of.
    printf("SIN\n");
    printf("please enter the value of x\n");
    scanf("%lf",&x);
    results = sin(x);
    printf("results = %.2lf\n",results);
    printf("the answer is %.2lf",results);
    
    break;
case 12:
//this function promtps the user to enter any number of their choice to which they wish to find the COS of.
    printf("COS\n");
    printf("please enter the value of x\n");
    scanf("%lf",&x);
    results = cos(x);
    printf("results = %.2lf\n",results);
    printf("the answer is %.2lf",results);
    
    break;
case 13:
//this function promtps the user to enter any number of their choice to which they wish to find the TAN of.
    printf("TAN\n");
    printf("please enter the value of x\n");
    scanf("%lf",&x);
    results = tan(x);
    printf("results = %.2lf\n",results);
    printf("the answer is %.2lf",results);
    break;
case 14:
//this function promtps the user to enter any number of their choice to which they wish to find the Log10 of.
    printf("log10\n");
    printf("please enter the value of x\n");
    scanf("%lf",&x);
    results = log10(x);
    printf("results = %.2lf\n",results);
    printf("the answer is %.2lf",results);  
    break;
case 15:
//this function promtps the user to enter any number of their choice to which they wish to find the Percentage of.
    printf("percentage\n");
    printf("please enter the value of x\n");
    scanf("%lf",&x);
    results =x/100;
    printf("results = %.2lf\n",results);
    printf("the answer is %.2lf",results);      
    
default:
    break;
    }

return 0;

}