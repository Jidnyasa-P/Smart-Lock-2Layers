#include<stdio.h>
#include<string.h>

int main() {

int password, attempts = 3;
char answer[20]; // Array to store answers for security questions

// Password verification
printf("Enter security password\nYou have %d attempts\n", attempts);

while (attempts > 0) {
    printf("Attempt %d: ", 4 - attempts);
    scanf("%d", &password);

    if (password == 6574) {
        printf("Door is opening...\n Security questions will be asked. \n Answer all the security questions to open the door.\n");
        break; // Exit the loop if the password is correct
    } else {
        attempts--;
        if (attempts > 0) {
            printf("Incorrect password... ");
            if (attempts > 1) {
                printf("You have %d attempts left.\n", attempts);
            } else {
                printf("You have 1 attempt left.\n");
            }
        } else {
            printf("Door is locked. Security will be called now.\n");
            return 0;
        }
    }
}

// Security question 1
attempts = 3; // Reset attempts for security questions
printf("Security Question 1: What is your favorite color?\n");
while (attempts > 0) {
    printf("Attempt %d: ", 4 - attempts);
    scanf("%s", answer);

    if (strcmp(answer, "blue") == 0) {
        printf("Correct! Moving to the next question.\n");
        break; // Move to next question if the answer is correct
    } else {
        attempts--;
        if (attempts > 0) {
            printf("Incorrect answer. You have %d attempts left.\n", attempts);
        } else {
            printf("Answer is wrong. Security will be called now.\n");
            return 0; // Terminate the program if the answer is wrong 3 times
        }
    }
}

// Security question 2
attempts = 3; // Reset attempts for the second question
printf("Security Question 2: What is your pet's name?\n");
while (attempts > 0) {
    printf("Attempt %d: ", 4 - attempts);
    scanf("%s", answer);

    if (strcmp(answer, "buddy") == 0) {
        printf("Correct! Moving to the next question.\n");
        break; // Move to next question if the answer is correct
    } else {
        attempts--;
        if (attempts > 0) {
            printf("Incorrect answer. You have %d attempts left.\n", attempts);
        } else {
            printf("Answer is wrong. Security will be called now.\n");
            return 0; // Terminate the program if the answer is wrong 3 times
        }
    }
}

// Security question 3
attempts = 3; // Reset attempts for the third question
printf("Security Question 3: What city were you born in?\n");
while (attempts > 0) {
    printf("Attempt %d: ", 4 - attempts);
    scanf("%s", answer);

    if (strcmp(answer, "paris") == 0) {
        printf("Correct! The door is now open.\n");
        return 0; // Exit the program as all questions are answered correctly
    } else {
        attempts--;
        if (attempts > 0) {
            printf("Incorrect answer. You have %d attempts left.\n", attempts);
        } else {
            printf("Door is locked. Security will be called now.\n");
            return 0; // Terminate the program if the answer is wrong 3 times
        }
    }
}

return 0;
}