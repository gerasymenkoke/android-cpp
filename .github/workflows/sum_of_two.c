#include <stdio.h>
#include<stdlib.h>

int main(int quantity, char  **number) {    

     int  sum;
    
    // printf("Enter two integers: ");
    
    // scanf("%d %d", &number1, &number2);

    // calculating sum
    // sum = number1 + number2;      
    sum=1;

    // printf("%s %s", number[1], number[2]);
    int num1 = atoi(number[1]); 
    int num2 = atoi(number[2]); 
    sum = num1 + num2;
    printf("%d + %d = %d", num1, num2, sum);
    
    return 0;
}
