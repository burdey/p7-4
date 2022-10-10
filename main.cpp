#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;

int main() {
    vector<int> inputs;
    std::string enter;
    getline(cin, enter);
    istringstream iss(enter);

    int answer;
    while (iss >> answer){
        inputs.push_back(answer);
    }

    QuickSort q1;
    q1.sort(inputs,0,inputs.size()-1); //Can't remove input.size

    RecursiveBinarySearch q2;
    int found = q2.binarySearch(inputs,1,0,inputs.size()-1); //Can't change false using search
    if (found > 0){
        cout << "true";
    }
    else{
        cout << "false";
    }
    for(int i = 0; i < inputs.size(); i++){
        cout << " " << inputs.at(i);
    }
}
