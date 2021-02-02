#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;


int computerChoiceValue, userChoiceValue;

//************************************
//This function decides a winner and** 
//displays what the computer chose  ** 
//************************************
int decider()
{
  //Displays what the computer chose
  if (computerChoiceValue == 1)
    cout << "The computer chose Rock" << endl;
  else if (computerChoiceValue == 2)
    cout << "The computer chose Paper" << endl;
  else
    cout << "The computer chose Scissors" << endl;

  //Compares the choices to decide a winner
  if (userChoiceValue == computerChoiceValue)
    cout << "The game is a tie";
  else if (userChoiceValue == 1 && computerChoiceValue == 2)
    cout << "You Lose";
  else if (userChoiceValue == 1 && computerChoiceValue == 3)
    cout << "You Win";
  else if (userChoiceValue == 2 && computerChoiceValue == 1)
    cout << "You Win";
  else if (userChoiceValue == 2 && computerChoiceValue == 3)
    cout << "You Lose";
  else if (userChoiceValue == 3 && computerChoiceValue == 1)
    cout << "You Lose";
  else
    cout << "You Win";
  cout << endl;
}


//***********************************************
//This function displays a menu, gets the users**
//choice, and generates computers choice       **
//***********************************************
int menu()
{
  char userChoice;

  //Displays Menu for the user to select option
  cout << "Make a selection - Rock(R), Paper(P), Scissors(S), or Quit(Q): ";
  cin >> userChoice;
    switch (userChoice)
      {
      repeat:
      case 'r':
      case 'R': userChoiceValue = 1;
                break;
      case 'p':
      case 'P': userChoiceValue = 2;
                break;
      case 's':
      case 'S': userChoiceValue = 3;
                break;
      case 'q':
      case 'Q': cout << "The program will now exit" << endl;
                exit(0);
                break;
      default:  cout << "Please enter R,P,S, or Q: " << endl;
                break;
      goto repeat;
      return 1;
      }

  //Generates random number
  const int MAX = 3;
  unsigned seed = time(0);
  srand(seed);
  computerChoiceValue = 1 + rand() % MAX;

  return 0;
}

//*******************************
//Main function that brings all**
//of the functions together    **
//*******************************
int main()
{
  while(1)
    {
      menu();
      decider();
    }

  return 0;
}



