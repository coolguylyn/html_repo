#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include <math.h>

int main(void){
char cat = '\0';
double num1 = 0;
double num2 = 0;
double sum = 0;
int fact = 0;

do
{
        printf("A -add\n");
        printf("S -subtract\n");
        printf("M -multiply\n");
        printf("D -devide\n");
        printf("V -squared\n");
        printf("T -square root\n");
        printf("F -factorial\n");
        printf("E -absolute value\n");
        printf("G -greater integer\n");
        printf("L -leap year\n");
        printf("X -exit program\n");

         scanf("\n%c", &cat);
        switch( toupper( ( unsigned char )cat )){
                case 'A':
                printf("First Number: ");
                scanf("%lf", &num1);
                printf("First Number: ");
                scanf("%lf", &num2);
                sum = num1 + num2;
                printf("%.2lf + %.2lf = %.2lf\n",num1, num2,sum);
                return 0;
            break;
                case 'S':
                printf("First Number: ");
                scanf("%lf", &num1);
                printf("First Number: ");
                scanf("%lf", &num2);
                sum = num1 - num2;
                printf("%.2lf - %.2lf = %.2lf\n",num1, num2,sum);
                return 0;
            break;
                case 'M':
                printf("First Number: ");
                scanf("%lf", &num1);
                printf("First Number: ");
                scanf("%lf", &num2);
                sum = num1 * num2;
                printf("%.2lf * %.2lf = %.2lf\n",num1, num2,sum);
                return 0;
            break;
                case 'D':
                printf("case d");
            break;
                case 'V':
                printf("case a");
            break;
                case 'T':
                printf("case s");
            break;
                case 'F':
                printf("case m");
            break;
                case 'E':
                printf("case d");
            break;
                case 'G':
                // printf("Enter a number you want rounded: ");
                // scanf("%lf", &num1);
                // // num2 = floorl(num1);
                // // num2 = ceil(num1);
                // num2 = floor(num1);
                // printf("%.2lf rounded is %.1lf", num1, num2);
                // return 0;

                 double number;
                printf("Enter a number: ");
                scanf("%lf", &number);

                double roundedNumber = ceil(number);

                printf("The rounded number is: %.0f\n", roundedNumber);

                return 0;
            break;
                case 'L':
                printf("case m");
            break;
                case 'X':
                printf("case d");
            break;

                default:
                    printf("Incorrect option, please try again\n");
        }
} while (cat != 'A' && cat != 'S' && cat != 'M' && cat != 'D' && cat != 'V' && cat != 'T' && cat != 'F' && cat != 'E' && cat != 'G' && cat != 'L' &&
cat != 'X' );





return 0;
}
