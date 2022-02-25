#include <iostream>
#include <vector>
#include <chrono>
#include <ctime>
#include <fstream>
using namespace std;

int main() {
    int i;
    srand(time(0));
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
    // This is the end of the array to vector and random numbers test

    
    cout << endl;
    cout << "[*][*][*]" << endl;


   /* Type your code here. */

   return 0;
}