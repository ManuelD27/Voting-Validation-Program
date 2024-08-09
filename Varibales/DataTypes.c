// Online C compiler to run C program online
/*
int         (4 bytes ) | %d for printing
double      (8 bytes ) | %lf for printing
float       (4 bytes ) | %f for printing
char        (1 bytes ) | %c for printing
*/



#include <stdio.h>

int main() 
{
    int age = 10;
    double number = 12.45;
    float number1 = 10.9f;
    char character = 'A';
    
    
    printf("Age = %d", age);
    printf("\nnumber = %.2lf", number);
    printf("\nnumber1 = %.1f", number1);
    printf("\ncharacter = %c", character);
    

    return 0;
}