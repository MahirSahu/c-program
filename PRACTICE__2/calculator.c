#include<stdio.h>
int main()
{
   float a,b,sum,sub,multi,div;
   char operator;


    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to consume any leftover whitespace


    printf("Enter two operands: ");
    scanf("%f %f", &a, &b);
   
//    switch (expression)
//    {
//    case constant expression:
//     /* code */
//     break;
   
//    default:
//     break;
//    }
    switch(operator){
        case '+':
            sum = a + b;
            printf("%f + %f = %f\n", a, b, sum);
            break;
        case '-':
            sub = a - b;
            printf("%f - %f = %f\n", a, b, sub);
            break;
        case '*':
            multi = a * b;
            printf("%f * %f = %f\n", a, b, multi);
            break;
        case '/':
            if (b != 0) {
                div = a / b;
                printf("%f / %f = %f\n", a, b, div);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }
    return 0;
}
