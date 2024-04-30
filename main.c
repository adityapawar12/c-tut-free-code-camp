#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void variableDemonstration();
void dataTypesDemonstration();
void printfDemonstration();
void mathOperatorsDemonstration();
void commentsDemonstration();
void constantsDemonstration();
void userInputsDemonstration();
void arraysDemonstration();
void functionsDemonstration();
void ifElseDemonstration();
void conditionalDemonstrations();
void structDemonstration();
void whileDemonstration();
void doWhileDemonstration();
void forDemonstration();
void nestedLoopDemonstration();
void memoryNPointersDemonstration();

void basicCalculator();
void madLib();
void sayHi();
double cubeOfNumber(double num);
int max(int num1, int num2, int num3);
void betterCalculator();
void guessTheNumber();

struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    // VARIABLES
    // variableDemonstration();


    // DATA TYPES
    // dataTypesDemonstration();


    // PRINTF
    // printfDemonstration();


    // MATH OPERATIONS
    // mathOperatorsDemonstration();


    // COMMENTS
    // commentsDemonstration();


    // CONSTANT
    // constantsDemonstration();


    // USER INPUT
    // userInputsDemonstration();


    // BASIC CALCULATOR
    // basicCalculator();


    // MAD LIB
    // madLib();


    // ARRAYS
    // arraysDemonstration();


    // FUNCTIONS
    // functionsDemonstration();


    // IF STATEMENTS
    // ifElseDemonstration();


    // CONDITIONALS
    // conditionalDemonstrations();


    // BETTER CALCULATOR
    // betterCalculator();


    // SWITCH CASE
    // switchCaseDemonstration();


    // STRUCT
    // structDemonstration();


    // WHILE
    // whileDemonstration();


    // DO WHILE
    // doWhileDemonstration();


    // GUESSING GAME
    // guessTheNumber();


    // FOR
    // forDemonstration();


    // 2D ARRAYS & NESTED LOOPS
    // nestedLoopDemonstration();


    // MEMORY ADDRESSES & POINTERS
    // memoryNPointersDemonstration();


    // FILES
    // WRITING TO FILE
    // FILE *fpointer = fopen("employees.txt", "w");
    // fprintf(fpointer, "Just finished my first c programming tutorial.\nfeeling good :)");

    // APPENDING TO FILE
    // FILE *fpointer = fopen("employees.txt", "a");
    // fprintf(fpointer, "\nI can append files.");

    // READING FROM FILE
    char line[255];
    FILE *fpointer = fopen("employees.txt", "r");
    fgets(line, 255, fpointer);
    printf("%s\n", line);

    fclose(fpointer);

    return 0;
}

void basicCalculator()
{
    double firstNumber;
    double secondNumber;
    printf("Enter First Number : ");
    scanf("%lf", &firstNumber);
    printf("Enter Second Number : ");
    scanf("%lf", &secondNumber);
    printf("Answer : %f\n", firstNumber + secondNumber);
}

void sayHi(char name[], char relation[])
{
    printf("Hi %s(%s)!!!\n", name, relation);
}

double cubeOfNumber(double num)
{
    return num * num * num;
}

void madLib()
{
    char color[20];
    char pluralNoun[20];
    char celebrity[20];
    printf("Enter your color : ");
    scanf("%s", color);
    printf("Enter your plural noun : ");
    scanf("%s", pluralNoun);
    printf("Enter your celebrity : ");
    scanf("%s", celebrity);
    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s\n", celebrity);
}

int max(int num1, int num2, int num3)
{
    int result;

    if(num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if(num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }

    return result;
}

void betterCalculator()
{
    double firstNumber;
    double secondNumber;
    char action;

    printf("Enter First Number : ");
    scanf("%lf", &firstNumber);
    printf("Action : ");
    scanf(" %c", &action);
    printf("Enter Second Number : ");
    scanf("%lf", &secondNumber);

    if(action == '-')
    {
        printf("Answer : %f\n", firstNumber - secondNumber);
    }
    else if(action == '+')
    {
        printf("Answer : %f\n", firstNumber + secondNumber);
    }
    else if(action == '*')
    {
        printf("Answer : %f\n", firstNumber * secondNumber);
    }
    else if(action == '/')
    {
        printf("Answer : %f\n", firstNumber / secondNumber);
    }
    else
    {
        printf("Please select valid action!");
    }
}

void guessTheNumber()
{
    int guessThisNumber = 6;
    int guessedNumber;
    int guessCount = 0;
    int guessLimit = 3;

    do {
        if(guessCount < guessLimit) {
            printf("Guess the number : ");
            scanf("%d", &guessedNumber);
            if(guessedNumber == guessThisNumber) {
                printf("You did it you crazy son of a gun!\n");
            }
            guessCount++;
        } else {
            printf("You failed me son!\n");
            break;
        }

    } while (guessedNumber != guessThisNumber);
}

// DEMONSTRATION FUNCTIONS
void variableDemonstration()
{
    char characterName[] = "Aditya";
    int characterAge = 23;
    printf("Hey there my name is %s and i am still learning c at age of %d\n", characterName, characterAge);
    characterAge = 24;
    printf("%s's age is %d now\n", characterName, characterAge);
}

void dataTypesDemonstration()
{
    // Basic
    // int age = 23;
    // float floating = 3.9;
    // double doubling = 6.9;
    // char nameInitials = 'A';
    // Complex
    // char name[] = "Aditya";
}

void printfDemonstration()
{
    printf("Some text\n");
    printf("Some text with a single character %c\n", 'c');
    printf("Some text with a number %d\n", 10);
    printf("Some text with a decimal point number %f\n", 10.20);
    printf("Some text with a text %s\n", "Again some text");
}

void mathOperatorsDemonstration()
{
    printf("%f\n", 10.0 + 20.0);
    printf("%f\n", 10.0 - 20.0);
    printf("%f\n", 10.0 * 20.0);
    printf("%f\n", 10.0 / 20.0);
    printf("%f\n", 10 + 20.0);
    printf("%f\n", pow(10, 3));
    printf("%f\n", sqrt(4));
    printf("%f\n", ceil(4.78));
    printf("%f\n", floor(4.78));
}

void commentsDemonstration()
{
    // COMMENTS
    /*
        MULTI LINE COMMENT
    */
}

void constantsDemonstration()
{
    int age = 23;
    printf("%d \n", age);
    age = 24;
    printf("%d \n", age);
    const int lifespan = 75;
    printf("%d \n", lifespan );
    // lifespan = 24;
}

void userInputsDemonstration()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    printf("Your age is : %d\n", age);

    double gpa;
    printf("Enter your gpa : ");
    scanf("%lf", &gpa);
    printf("Your gpa is : %lf\n", gpa);

    char grade;
    printf("Enter your grade : ");
    scanf(" %c", &grade);
    printf("Your grade is : %c\n", grade);

    char name[10];
    printf("Enter your name(10 characters long only) : ");
    scanf(" %s", name);
    printf("Your name is : %s\n", name);

    // char name2[10];
    // printf("Enter your name(10 characters long only) : ");
    // fgets(name2, 10, stdin);
    // printf("Your name is : %s \n", name2);
}

void arraysDemonstration()
{
    int luckyNumbers[] = {4, 20, 33, 63, 20};
    printf("Current lucky number is %d\n", luckyNumbers[2]);
    luckyNumbers[2] = 200;
    printf("Current lucky number after modification is %d\n", luckyNumbers[2]);

    int luckyNumbersNew[3];
    luckyNumbersNew[0] = 100;
    luckyNumbersNew[1] = 200;
    luckyNumbersNew[2] = 300;
    printf("Current lucky number is %d\n", luckyNumbersNew[2]);

    // char fullName[20] = "Aditya Pawar";
}

void functionsDemonstration()
{
    sayHi("Aditya", "Me");
    printf("Answer : %f \n", cubeOfNumber(8.0));
}

void ifElseDemonstration()
{
    printf("Maximum number is %d\n", max(1, 2, 3));
}

void conditionalDemonstrations()
{
    if(2 > 3 && 2 < 4)
    {
        printf("Okay\n");
    }
    else
    {
        printf("Not Okay\n");
    }

    if(2 > 3 || 2 < 4)
    {
        printf("Okay\n");
    }
    else
    {
        printf("Not Okay\n");
    }

    if(2 > 3)
    {
        printf("Okay\n");
    }
    else
    {
        printf("Not Okay\n");
    }

    if(2 >= 3)
    {
        printf("Okay\n");
    }
    else
    {
        printf("Not Okay\n");
    }

    if(2 < 3)
    {
        printf("Okay\n");
    }
    else
    {
        printf("Not Okay\n");
    }

    if(2 <= 3)
    {
        printf("Okay\n");
    }
    else
    {
        printf("Not Okay\n");
    }

    if(2 == 3)
    {
        printf("Okay\n");
    }
    else
    {
        printf("Not Okay\n");
    }

    if(2 != 3)
    {
        printf("Okay\n");
    }
    else
    {
        printf("Not Okay\n");
    }
}

void switchCaseDemonstration()
{
    char grade = 'E';

    switch(grade)
    {
    case 'A' :
        printf("You did great!");
        break;
    case 'B' :
        printf("You did alright!");
        break;
    case 'C' :
        printf("You did poorly!");
        break;
    case 'D' :
        printf("You did very bad!");
        break;
    case 'F' :
        printf("You failed!");
        break;
    default:
        printf("Invalid grade!");
    }
}

void structDemonstration()
{
    struct Student studentOne;
    strcpy(studentOne.name, "Aditya");
    strcpy(studentOne.major, "Comp Science");
    studentOne.age = 23;
    studentOne.gpa = 6.0;

    printf("%s\n", studentOne.name);
    printf("%s\n", studentOne.major);
    printf("%d\n", studentOne.age);
    printf("%f\n", studentOne.gpa);
    printf("\n");

    struct Student studentTwo;
    strcpy(studentTwo.name, "Aditya 2");
    strcpy(studentTwo.major, "Comp Science");
    studentTwo.age = 22;
    studentTwo.gpa = 5.0;

    printf("%s\n", studentTwo.name);
    printf("%s\n", studentTwo.major);
    printf("%d\n", studentTwo.age);
    printf("%f\n", studentTwo.gpa);
    printf("\n");
}

void whileDemonstration()
{
    int index = 1;
    while (index <= 5) {
        printf("%d \n", index);
        index++;
    }
}

void doWhileDemonstration()
{
    int index = 6;
    do {
        printf("%d \n", index);
        index++;
    } while (index <= 5);
}

void forDemonstration()
{
    for(int i = 0; i < 5; i++) {
        printf("%d \n", i + 1);
    }
    printf("\n");

    int luckyNumbers[5] = {4, 20, 33, 63, 20};
    for(int i = 0; i < 5; i++) {
        printf("%d \n", luckyNumbers[i]);
    }
}

void nestedLoopDemonstration()
{
    int nums[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    printf("%d \n", nums[0][1]);

    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d, ", nums[i][j]);
        }
        printf("\n");
    }
}

void memoryNPointersDemonstration()
{
    int age = 30;
    // POINTER
    int *pAge = &age;
    double gpa = 3.6;
    double *pGpa = &gpa;
    char grade = 'A';
    char *pGrade = &grade;

    // MEMORY ADDRESSES
    printf("age: %p\n", &age);
    printf("gpa: %p\n", &gpa);
    printf("grade: %p\n", &grade);

    // POINTERS
    printf("age: %p\n", pAge);
    printf("gpa: %p\n", pGpa);
    printf("grade: %p\n", pGrade);

    // DEREFERENCING POINTERS
    printf("age: %d\n", *pAge);
    printf("gpa: %f\n", *pGpa);
    printf("grade: %c\n", *pGrade);


    printf("age: %p\n", &age);
    printf("age: %d\n", *&age);
    printf("age: %p\n", &*&age);
    printf("age: %d\n", *&*&age);
}



