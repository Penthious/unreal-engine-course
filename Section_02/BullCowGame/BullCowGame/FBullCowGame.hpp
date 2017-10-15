#include <string>
using FString = std::string;
using int32 = int;

struct FBullCowCount
{
    int32 Bull = 0;
    int32 Cow = 0;
};

enum class EGuessStatus
{
    OK,
    Not_Isogram,
    Wrong_Length,
    Not_Lowercase,
    Invalid_Status,
};

class FBullCowGame
{
public:
    FBullCowGame();
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    int32 GetHiddenWordLength() const;
    bool IsGameWon() const;
    EGuessStatus CheckGuessValidity(FString) const;
    FBullCowCount SubmitGuess(FString);

    void Reset(); // TODO: make a more rich return value
    // provide a method for counting bulls & cows, and increasing try number
    
private:
    int32 MyCurrentTry;
    FString MyHiddenWord;
    bool bGameIsWon;
    bool IsIsogram(FString) const;
    bool IsLowercase(FString) const;
};
