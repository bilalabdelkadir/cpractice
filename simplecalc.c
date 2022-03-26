#include <stdio.h>

int main(){
    char opr;
    double num1;
    double num2;
    double result;

    printf("Enter which operator you want to use (- + * /)\n");
    scanf("%c",&opr);
    
    if(opr == '-' || opr == '+' || opr == '*' || opr == '/'){
        printf("Enter Number one: \n");
        scanf("%lf",&num1);
        printf("Enter Number two: \n");
         scanf("%lf",&num2);
        switch (opr) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf",result);
            break;
        case '/':
            result = num1 / num2;
            printf("Result:%.2lf",result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result:%.2lf",result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result:%.2lf",result);
            break;            
        
        default:
            break;
        }

    }else {
        printf("Please Enter a valid operator");
    }
}