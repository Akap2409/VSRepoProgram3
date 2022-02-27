#include <iostream>
#include <vector>
#include <chrono>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;


void DisplayInstructions(){

    cout << "Program 3: Wordle Reload" << "\n"
        << "CS 141, Spring 2022, UIC" << "\n"
        << endl
        << "The objective of this game is to guess the randomly selected word within a given number of attempts."
        << " You can select either a three or five word board." << "\n"
        << "At the conclusion of the game, state will be displayed." << "\n"
        << "Indicators will be given if characters of the user entered word are reflected in the guessed word." << "\n"
        << "   - If the character is in the corrected position, the character will be displayed as an uppercase value." << "\n"
        << "   - If the character is within the random word, the character will display as a lowercase value." << "\n";
    cout << "   - If you enter a character that is not in the word, an asterisk '*' will display" << "\n";

}

void PrintVectorVals(vector <string> PrintVec, int VectorSize){
    // Outputs the values at every index of the given vector (PrintVec) according to the given size (VectorSize)
    int i;
    
    for (i = 0; i < VectorSize; i++){
        cout << PrintVec.at(i) << " ";

    }
    cout << endl;
}

int main() {
    int i;
    srand(time(0));
    
    /*
    int NUM_VALS = rand() % 10;
    vector <int> TestRand(NUM_VALS);
    int NumArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // This is for testing random numbers and moving elements from an array Numarray to a vector TestRand
    
    cout << NUM_VALS << endl;
    for(i = 0; i < NUM_VALS; i++){
        TestRand.at(i) = NumArray[i];
    }
    for(i = 0; i < TestRand.size(); i++){
        cout << TestRand.at(i) << " ";
    } 
    cout << endl;
    if ((NUM_VALS - 1) == -1){
        cout << "Ya got no more time to do this";
    }
    else if(NUM_VALS == 0){
        cout << "Ya got no more time to do this";
    }
    else{
        cout << "Ya got less than " << TestRand.at(NUM_VALS - 1) << " day(s) to do this";
    }
    // This is the end of the array to vector and random numbers test */

    int ListSizeA = 0;
    int ListSizeB = 0;
    
    string PosAnswer;
    string PosGuess;
    vector <string> PossibleAnswersVec(ListSizeA);
    vector <string> AllGuessesVec(ListSizeB);

    ifstream MyWordleFile("wordlewords.txt");

    while(getline(MyWordleFile, PosAnswer)){
        PossibleAnswersVec.push_back(PosAnswer);
        ListSizeA++;
    }

    MyWordleFile.close();

    ifstream MyDictFile("dictionary.txt");

    while(getline(MyDictFile, PosGuess)){
        AllGuessesVec.push_back(PosGuess);
        ListSizeB++;
    }

    MyDictFile.close();

    cout << endl;

    // PrintVectorVals(PossibleAnswersVec, ListSizeA);
    
    DisplayInstructions();
    // cout << ListSizeB;
    cout << endl;
    cout << "[*][*][*]" << endl;


    return 0;
}