#include <stdio.h>
int main(int quantity, char  **number) {    

     int  sum;
    
    // printf("Enter two integers: ");
    
    // scanf("%d %d", &number1, &number2);

    // calculating sum
    // sum = number1 + number2;      
    sum=1;

    printf("%s %s", number[1], number[2]);
    int num1 = number[1] - '0'; 
    int num2 = number[2] - '0'; 
    sum = num1 + num2;
    printf("%d + %d", num1, num2);
    printf("sum = %d" , sum );
    return 0;
}
