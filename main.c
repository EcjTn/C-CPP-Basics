#include<stdio.h>
#include <string.h>
#include <stdlib.h>  // For system()
#include <unistd.h>
#include <windows.h>


#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"


int main()
{





    
    system("cls");
    SetConsoleTitle("Crail Net  ~  Current: 0  ~  owner: @kalicxii");
    


    char answer;
    printf(ANSI_COLOR_CYAN "Register (Y/N): " ANSI_COLOR_RESET);
    scanf(" %c", &answer);
    if (answer == 'y' || answer == 'Y') {
        printf("\n");
        printf(ANSI_COLOR_GREEN "Operation Accepted...\n" ANSI_COLOR_RESET);
        printf("\n");
    }

    else if (answer == 'n' || answer == 'N') {
        printf(ANSI_COLOR_RED "Operation Declined...\n" ANSI_COLOR_RESET);
        sleep(1);
        exit(0);

    }

    else {
        printf("Visit fent.com\n" ANSI_COLOR_RESET);
        sleep(2);
        exit(0);

    }

    char name[100];

    printf("Enter Username: ");

    scanf(" %s", &name);

    printf("\n");
    printf("\n");
    printf(ANSI_COLOR_GREEN "          User created: %s\n", name, ANSI_COLOR_RESET);
    printf("\n");
    printf("\n");










    char key[10];
    printf(ANSI_COLOR_RESET "Enter valid key: ");
    scanf(" %s", &key);
    printf("\n");
    printf("\n");
    printf(ANSI_COLOR_GREEN "          Your Key is %s\n", key, ANSI_COLOR_RESET);
    printf("\n");
    printf("\n");



    char password[30];
    printf(ANSI_COLOR_RESET "Enter Password: ");
    scanf(" %s", &password);
    printf("\n");
    printf("\n");
    printf(ANSI_COLOR_GREEN "          Your Password is %s\n", password, ANSI_COLOR_RESET);
    printf("\n");
    printf("\n");


    // Fake Shop Prices:

    float chemistRank = 5.30;
    float mvpRank = 10.00;
    float vipRank = 15.30;



    system("cls");
    printf("\n");
    printf(ANSI_COLOR_MAGENTA "Account created!\n");
    printf("\n");
    sleep(1);
    printf(" __________ INFORMATIONS __________\n");
    printf("\n");
    sleep(1);
    printf(" User: %s\n", name);
    printf("\n");
    sleep(1);
    printf(" Key: %s\n", key);
    printf("\n");
    sleep(1);
    printf(" Password: %s\n", password, ANSI_COLOR_RESET);
    printf("\n");
    sleep(1);
    printf(ANSI_COLOR_MAGENTA " __________________________________");
    printf(ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_RESET "\n");
    sleep(1);

    // print shop:

    printf(ANSI_COLOR_YELLOW " _________ Our Shop __________\n");
    printf("\n");
    printf(" Chemist Rank Price: $%1.2f\n", chemistRank);
    printf(" MVP Rank Price: $%1.2f\n", mvpRank);
    printf(ANSI_COLOR_YELLOW " _________________________ \n");
    printf("\n");



    //math simple:


    int num1;

    printf(ANSI_COLOR_CYAN "Enter number 1: ");
    scanf(" %d", &num1);

    int num2;

    printf("Enter number 2: ");
    scanf(" %d", &num2);

    printf("Hello your Examples are: %d and %d \n", num1, num2);
    sleep(2);
    printf("Now lets math it! \n");
    sleep(2);
    int results = num1 * num2;
    printf("Results: %d", results);








    sleep(5);





    return 0;
}
