/*Rock , paper and scissors game*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int userChoice, computerChoice;

    srand(time(0)); 
    computerChoice = rand() % 3 + 1;  

    cout << "....Welcome to Rock Paper Scissors game....\n";
    cout << "Enter your choice: \n 1. Rock \n 2. Paper \n 3. Scissors\n";
    cin >> userChoice;

    cout << "Your Choice: " << userChoice << endl;
    cout << "Computer's Choice: " << computerChoice << endl;

    if (computerChoice == userChoice) 
    {
        cout << "...It's a tie...\n";
    }

    else if ((computerChoice == 1 && userChoice == 3) ||  (computerChoice == 2 && userChoice == 1) || (computerChoice == 3 && userChoice == 2)) 
    {
        cout << "Computer Wins!\n";
    }

    else
    {
        cout << "You win!\n";
    }

    return 0;
}
