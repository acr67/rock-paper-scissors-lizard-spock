#include <iostream>
#include <stdlib.h>
#include <ctime> //needed to prototype srand
using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Select:\nRock (0)\nPaper (1)\nScissors (2)\nLizard (3)\nSpock (4)" << endl;
    int choice;
    cin >> choice;

    // from stdlib.h
    srand(time(NULL));
    int compans = rand() % 5; // Generates a random answer from the computer

    // cout<<"Computer chose "<<compans<<endl;
    /*
    switch(choice){
      case 0:
        cout<<"You chose Rock!"<<endl;
        break;
      case 1:
        cout<<"You chose Paper!"<<endl;
        break;
      case 2:
        cout<<"You chose Scissors!"<<endl;
        break;
      case 3:
        cout<<"You chose Lizard!"<<endl;
        break;
      case 4:
        cout<<"You chose Spock!"<<endl;
        break;

      default:
        break;
    }
    */

    /*
    switch(compans){
      case 0:
        cout<<"Computer chose Rock!"<<endl;
        break;
      case 1:
        cout<<"Computer chose Paper!"<<endl;
        break;
      case 2:
        cout<<"Computer chose Scissors!"<<endl;
        break;
      case 3:
        cout<<"Computer chose Lizard!"<<endl;
        break;
      case 4:
        cout<<"Computer chose Spock!"<<endl;
        break;

      default:
        break;
    }
    */

    if (choice == compans)
    {
        cout << "Tied! Computer picked the same answer." << endl;
    }
    else
    {
        // Selecting the winner
        switch (compans)
        {
        case 0:
            cout << "Computer chose Rock!" << endl;
            if (choice == 3 || choice == 2)
            {
                cout << "You Lose\n";
            }
            else
            {
                cout << "You Win\n";
            }
            break;
        case 1:
            cout << "Computer chose Paper!" << endl;
            if (choice == 0 || choice == 4)
            {
                cout << "You Lose\n";
            }
            else
            {
                cout << "You Win\n";
            }
            break;
        case 2:
            cout << "Computer chose Scissors!" << endl;
            if (choice == 1 || choice == 2)
            {
                cout << "You Lose\n";
            }
            else
            {
                cout << "You Win\n";
            }
            break;
        case 3:
            cout << "Computer chose Lizard!" << endl;
            if (choice == 1 || choice == 4)
            {
                cout << "You Lose\n";
            }
            else
            {
                cout << "You Win\n";
            }
            break;
        case 4:
            cout << "Computer chose Spock!" << endl;
            if (choice == 0 || choice == 2)
            {
                cout << "You Lose\n";
            }
            else
            {
                cout << "You Win\n";
            }
            break;

        default:
            break;
        }
    }
}
/*
Rock > Lizard.
Rock > Scissors.

Paper > Rock.
Paper > Spock.

Scissors > Paper.
Scissors > Lizard.

Lizard > Spock.
Lizard > Paper.

Spock > Scissors.
Spock > Rock.
*/