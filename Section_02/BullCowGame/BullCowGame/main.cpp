#include <iostream>
#include "FBullCowGame.hpp"

using FText = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
void PrintGameSummary();
void PrintBullCowCount(FBullCowCount);
bool AskToPlayAgain();
FText GetValidGuess();

FBullCowGame BCGame;

// The entry point for our application
int main() {
    do {
        PrintIntro();
        PlayGame();
    } while (AskToPlayAgain());

    return 0; // exit app
}

void PrintIntro() {
    // introduce the game

    std::cout << "\n\nWelcome to Bulls and Cows, a fun word game" << std::endl;
    std::cout << "Can you guess the " << BCGame.GetHiddenWordLength();
    std::cout << " letter isogram I'm thinking of?" << std::endl;

    return;
}

void PlayGame() {
    BCGame.Reset();
    int32 MaxTries = BCGame.GetMaxTries();
    while(!BCGame.IsGameWon() && BCGame.GetCurrentTry() <= MaxTries){
        FText Guess = GetValidGuess(); // TODO: check valid guess

        FBullCowCount BullCowCount = BCGame.SubmitGuess(Guess);
        // Submit valid guess to the game
        // Print nember of bulls and cows
        PrintBullCowCount(BullCowCount);
        std::cout << std::endl;
    }
    PrintGameSummary();
}

void PrintGameSummary()
{
    BCGame.IsGameWon() ? std::cout << "You Win\n\n" : std::cout << "Better luck next time\n\n";
}

// get a guess from the player
FText GetValidGuess() {
    FText Guess = "";
    EGuessStatus Status = EGuessStatus::Invalid_Status;
    do {
        std::cout << std::endl;
        std::cout << "Try " << BCGame.GetCurrentTry() << " Enter your guess: ";
        std::getline(std::cin, Guess);

        Status = BCGame.CheckGuessValidity(Guess);

        switch (Status) {
            case EGuessStatus::Wrong_Length:
                std::cout << "Please enter a "
                          << BCGame.GetHiddenWordLength()
                          << " letter word."
                          << std::endl;
                break;
            case EGuessStatus::Not_Lowercase:
                std::cout << "Please enter only lower case."
                          << std::endl;
                break;
            case EGuessStatus::Not_Isogram:
                std::cout << "Word given was not a isogram."
                          << std::endl;
                break;
            default:
                break;
        }
        std::cout << std::endl;
    }while(Status != EGuessStatus::OK);

    return Guess;
}

// repeat the guess back to them
void PrintBullCowCount(FBullCowCount BullCowCount) {
    std::cout << "Bulls = " << BullCowCount.Bull << std::endl;
    std::cout << "Cows = " << BullCowCount.Cow << std::endl;

    return;
}

// Checks if user wants to play again
bool AskToPlayAgain() {
    std::cout << "Do you want to play again with the same word? (y/n)";
    FText Response;
    std::getline(std::cin, Response);
    transform(Response.begin(), Response.end(), Response.begin(), ::tolower);

    return (Response[0] == 'y');
}
