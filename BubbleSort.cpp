#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "bubbleSort.h"
using namespace std;

int main(int argc, char* argv[]) {
    int size;
    // Get command line input
    if (argc > 1) {
        size = stoi(argv[1]);
    } else {
        size = 10000;
    }
    cout << "Looking for size: " << size << endl;

    vector <long> data;

    // TODO: Read size numbers from numbers.txt

    ifstream inFile;
    inFile.open("numbers.txt");
    long num;
    for (int i = 0; i < size; i++){
        inFile >> num;
        data.push_back(num);
    }
    inFile.close();

    


    // TODO: Print the vector size (to make sure it matches the size printed above)

    cout << data.size() << endl;

    // TODO: Bubble Sort the vector

    vector <long> sortedData = bubbleSort(data);



    //TODO: Print the first and last ten numbers from the vector to the console

    cout << "To prove it worked, here are the first ten and last ten numbers of the vector:" << endl;

   

    cout << "[ ";
    for (int i = 0; i < 10; i++){
       cout << sortedData[i] << ", ";
    }
    cout << "]" << endl;
    cout << "[ ";
    for (int i = 10; i > 0; i--){
        cout << sortedData[sortedData.size() - i ] << ", ";
    }
    cout << "]" << endl;
    return 0;
}

