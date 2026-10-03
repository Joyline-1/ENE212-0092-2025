#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,Answer;
    char operation;
    printf("Enter the first number:");
    scanf("%f",&num1);
    printf("Enter the operation(+,-,*./):");
    scanf(" %c",&operation);
    printf("Enter the second number:");
    scanf("%f",&num2);
    switch(operation){
    case'+':
    printf("Answer=%f\n",num1+num2);
    break;
    case'-':
        printf("Answer=%f\n",num1-num2);
        break;
    case'*':
        printf("Answer=%f\n",num1*num2);
        break;
    case'/':
        if(num2!=0)
            printf("Answer=%f",num1/num2);
        else
            printf("Cannot divide by zero.");

        break;
    default:
        printf("invalid");
        break;}
    return 0;
}
