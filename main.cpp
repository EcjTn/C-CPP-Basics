#include <iostream>
#include <string>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
#include <limits>  //new line ignorer
#include <fstream> //file
#include <direct.h> // for _mkdir (Windows)

using string_t = std::string;




//remember this is 2ND OPTION RUSSIAN ROULETE
void game(std::string fName) {

    srand(time(0)); // Seed the random number generator

    int userChoice;
    int computerChoice;

    std::cout << "Logged in as: @" << fName << '\n';
    std::cout << "Enter your choice (1-8): ";
    std::cin >> userChoice;

    computerChoice = (rand() % 8) + 1;

    std::cout << "Pow... " << computerChoice << '\n';

    if(userChoice == computerChoice) {
        std::cout << "YOU WON!!! CONGRATULATIONS" << '\n';
        return;
    }

    else if(computerChoice == 1) {
        std::cout << "YOU LOSE!!" << '\n';
    }
    else {
        game(fName);
    }

}





//FIRST OPTION
void calc() {
    char op;
    double num1;
    double num2;
    double mathResult;

    std::cout << "Enter Operator(+, -, /, *):";
    std::cin >> op;

    std::cout << "First number: ";
    std::cin >> num1;

    std::cout << "Second number: ";
    std::cin >> num2;

    switch(op) {
        case '+':
            mathResult = num1 + num2;
            std::cout << "Results: " << mathResult;
            break;

        case '-':
            mathResult = num1 - num2;
            std::cout << "Results: " << mathResult;
            break;

        case '/':
            mathResult = num1 / num2;
            std::cout << "Results: " << mathResult;
            break;

        case '*':
            mathResult = num1 * num2;
            std::cout << "Results: " << mathResult;
            break;

        
        default:
            std::cout << "Invalid operator.\n";
    }






}


void whileGameLoop() {

    string_t wName;

    std::cout << "Welcome to while loop test! \n";

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //IGNORES THE LINE TO AVOID COUT DUPLICATIONS

    //while loops only print ones!!!

    while(wName.empty()) {
        std::cout << "Enter While Loop Test Name: ";
        std::getline(std::cin, wName);
    }

    std::cout << "Hello " << wName << " you are now at the exit of While Loop Test! \n";

}

void doGameLoop() {
    int doNumber;

    std::cout << "Welcome to Do While Loop Test! \n";

    do{
        std::cout << "Enter number (1-10): ";
        std::cin >> doNumber;
    }while(doNumber <= 0);


    std::cout << "You have finally entered a POSITIVE number! your # is :" << doNumber << '\n';

}



void doForLoop() {
    for(int i = 1; i <= 20; i++) {
        std::cout << "This is a For Loop!" << i << '\n';
    }
}




void banki(string_t fName, int currentMoney){

    int bankChoice;
    int withdrawChoice;
    int depositChoice;

    std::cout << "****************************\n";
    std::cout << '\n';
    std::cout << "Username: @" << fName << '\n';
    std::cout << "Balance: $" << currentMoney << '\n';
    std::cout << '\n';
    std::cout << "Deposit Money(1)\n";
    std::cout << "Withraw Money(2)\n";
    std::cout << '\n';
    std::cout << "****************************\n";
    std::cout << '\n';
    std::cout << "@" << fName << "#~: " ;
    std::cin >> bankChoice;

    switch(bankChoice) {
        case 1:
            std::cout << "Enter money to deposit: ";
            std::cin >> depositChoice;
            currentMoney = depositChoice + currentMoney;
            system("cls");
            banki(fName, currentMoney);
            break;

        case 2:
            std::cout << "Enter money to withdraw: ";
            std::cin >> withdrawChoice;
            if(currentMoney <= withdrawChoice) {
                std::cout << "Not Allowed.\n";
                return;
            }
            currentMoney = currentMoney - withdrawChoice;
            system("cls");
            banki(fName, currentMoney);
            break;
        default: std::cout << "Invalid Choice.\n";

    }

}


void arrayGame() {
    string_t arrayMe[] = {"Vian", "Noob", "C++", "Red Teaming"};

    std::cout << "Your arrays are in string_t arrayMe!\n";
    std::cout << "Arrays: " << arrayMe[0] << ' ' << arrayMe[1] << ' ' << arrayMe[2] << ' ' << arrayMe[3] << '\n';
}



void loginGame() {

    int loginChoice;
    string_t loginName;
    string_t loginPass;

    std::cout << "**********************************\n";
    std::cout << '\n';
    std::cout << "1. Register\n";
    std::cout << "2. Login\n";
    std::cout << "3. Vote\n"; 
    std::cout << "4. Contact\n";
    std::cout << "5. Calculator\n";
    std::cout << '\n';
    std::cout << "***********************************\n";
    std::cout << "Enter choice: ";
    std::cin >> loginChoice;

    switch(loginChoice){
        case 1:
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //IGNORES THE LINE TO AVOID COUT DUPLICATIONS
            std::cout << "Create Username: ";
            std::getline(std::cin, loginName);

            _mkdir("data"); // MKDIR

            std::ofstream loginpage("data/creds.txt");
            loginpage << loginName;
            loginpage.close();

            std::cout << "Create Password: ";
            std::getline(std::cin, loginPass);

            loginpage.open("data/creds.txt", std::ios::app); //append is edit
            if(loginpage.is_open()) {
                loginpage << '\n' << loginPass << '\n';
            }
            else{
                std::cout << "Error.\n";
                return;
            }
            loginpage.close();
            std::cout << "Username created!\n";



            break;
        
    }


}



int main(int argc, char *argv[]) {


    string_t fName;

    int pageChoice;

    int currentMoney = 0;

    string_t arguBi;
    arguBi = argv[1];


    std::cout << "Enter ID Name: ";
    std::getline(std::cin, fName);

    if(fName.empty()) {
        std::cout << "Name empty! \n";
        return 1;
    }


    system("cls");
    std::cout << "Your Verification: " << arguBi << '\n';
    std::cout << "ID in as: @" << fName << '\n';
    std:: cout << "Balance: $" << currentMoney << '\n';
    std::cout << "****************************************************\n";
    std::cout << '\n';
    std::cout << "1. Calculator           6. Banking System\n";
    std::cout << "2. Russian Roulete      7. Array System\n";
    std::cout << "3. While Loop Game      8. Login System\n"; 
    std::cout << "4. Do While Loop Game\n";
    std::cout << "5. For Loop Game\n";
    std::cout << '\n';
    std::cout << "****************************************************\n";
    std::cout << "Enter choice: ";
    std::cin >> pageChoice;

    
    //pageChoice functions

    switch(pageChoice){
        case 1:
            system("cls");
            calc();
            break;

        case 2:
            system("cls");
            game(fName);
            break;

        case 3:
            system("cls");
            whileGameLoop();
            break;

        case 4:
            system("cls");
            doGameLoop();
            break;

        case 5:
            system("cls");
            doForLoop();
            break;

        case 6:
            system("cls");
            banki(fName, currentMoney);
            break;

        case 7:
            system("cls");
            arrayGame();
            break;

        case 8:
            system("cls");
            loginGame();
            break;

        default:
            std::cout << "Error page choice...";
    }
    return 0;



}