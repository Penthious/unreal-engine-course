#include "FBullCowGame.hpp"
#include <map>
#define TMap std::map

using int32 = int;

FBullCowGame::FBullCowGame()
{
    Reset();
}
int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }
int FBullCowGame::GetHiddenWordLength() const { return static_cast<int>(MyHiddenWord.length()); }
bool FBullCowGame::IsGameWon() const { return bGameIsWon; }

void FBullCowGame::Reset() {
    constexpr int32 STARTING_TRIES = 1;
    constexpr int32 MAX_TRIES = 8;
    const FString HIDDEN_WORD = "planting";
    
    MyCurrentTry = STARTING_TRIES;
    MyMaxTries = MAX_TRIES;
    MyHiddenWord = HIDDEN_WORD;
    bGameIsWon = false;
    
    return;
}


EGuessStatus FBullCowGame::CheckGuessValidity(std::string Guess) const
{
    if (!IsIsogram(Guess)) {
        return EGuessStatus::Not_Isogram;
    }else if (!IsLowercase(Guess)){
        return EGuessStatus::Not_Lowercase;
    }else if(Guess.length() != GetHiddenWordLength()) {
        return EGuessStatus::Wrong_Length;
    }else{
        return EGuessStatus::OK;
    }
}

// Recieves a valid guess, increments turn and returns count
FBullCowCount FBullCowGame::SubmitGuess(FString Guess)
{
    MyCurrentTry++;
    FBullCowCount BullCowCount = FBullCowCount();
    
    int32 HiddenWordLength = FBullCowGame::GetHiddenWordLength();
    for (int32 i = 0; i < HiddenWordLength; i++) {
        if (Guess[i] == MyHiddenWord[i]) {
            BullCowCount.Bull++;
        }else{
            for(int32 j = 0; j < HiddenWordLength; j++) {
                if (Guess[i] == MyHiddenWord[j]){
                    BullCowCount.Cow++;
                }
            }
        }
    }
    bGameIsWon = BullCowCount.Bull == HiddenWordLength;
    
    return BullCowCount;
}

bool FBullCowGame::IsIsogram(FString Word) const {
    if (Word.length() <= 1){
        return true;
    }
    TMap<char, bool> LetterSeen;
    for (auto Letter : Word) {
        Letter = tolower(Letter);
        if(LetterSeen[Letter]){
            return false;
        }else {
           LetterSeen[Letter] = true;
        }
    }
    return true;
}

bool FBullCowGame::IsLowercase(FString Word) const {
    if (Word.length() == 0 || Word.length() == '\0'){
        return true;
    }
    for (auto Letter : Word) {
        if(!islower(Letter)){
            return false;
        }
    }
    return true;
}
