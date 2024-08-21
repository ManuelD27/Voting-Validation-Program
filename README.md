# Voting Validation Program

## Description

This is a simple C program that checks if a user is eligible to vote based on their age. The program prompts the user to enter their age and provides a message indicating whether they are allowed to vote.

## Features

- Takes user input for age.
- Validates if the input is a number.
- Checks if the age is within a realistic range.
- Displays appropriate messages based on age.

#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        printf("Invalid input");
        return 1;
    }

    if (age >= 18) {
        printf("You are allowed to vote!");
    } else {
        printf("You are not allowed to vote yet");
    }

    return 0;
}

   git clone https://github.com/ManuelD27/Voting-Validation-Program.git
