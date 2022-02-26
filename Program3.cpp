#include <iostream>
#include <vector>
#include <chrono>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;

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

    int NUM_VAL = 0;
    // string WordArray[30];
    
    
    cout << endl;
    
    string Test;

    ifstream MyFile("wordlewords.txt");

    while(getline(MyFile, Test)){
        // cout << Test << " ";
        NUM_VAL++;
    }

    vector <string> WordVector(NUM_VAL);
    cout << endl;
    // cout << WordVector.at(50);

    for (i = 0; i < NUM_VAL; i++){
        getline(MyFile, WordVector.at(i));
        cout << WordVector.at(i);

    }

    MyFile.close();

    cout << endl;
    cout << "[*][*][*]" << endl;


    return 0;
}