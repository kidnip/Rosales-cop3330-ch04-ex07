#include "std_lib_facilities.h"

int main(){
    char hold[1];
    int i;
    double input1, input2, result = 0;
    vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string inputA, inputB, operation;
    
    cout << "Enter two single-digit values and an operation (separated by spaces):\n";
    cin >> inputA >> inputB >> operation;

    if(inputA.length() > 1 && inputB.length() > 1){
        for(i = 0; i < numbers.size(); i++){
            if(numbers[i] == inputA){
                input1 = i;
                break;
            }
        }
        for(i = 0; i < numbers.size(); i++){
            if(numbers[i] == inputB){
                input2 = i;
                break;
            }
        }
    }
    else if(inputA.length() > 1 && inputB.length() == 1){
        for(i = 0; i < numbers.size(); i++){
            if(numbers[i] == inputA){
                input1 = i;
                break;
            }
        }
        strcpy(hold, inputB.c_str());
        input2 = hold[0] - 48;
    }
    else if(inputA.length() == 1 && inputB.length() > 1){
        strcpy(hold, inputA.c_str());
        input1 = hold[0] - 48;
        for(i = 0; i < numbers.size(); i++){
            if(numbers[i] == inputB){
                input2 = i;
                break;
            }
        }
    }
    else if(inputA.length() == 1 && inputB.length() == 1){
        strcpy(hold, inputA.c_str());
        input1 = hold[0] - 48;

        strcpy(hold, inputB.c_str());
        input2 = hold[0] - 48;
    }

    if(operation == "+"){
        operation = "sum";
        result = input1 + input2;
    }
    else if(operation == "-"){
        operation = "difference";
        result = input1 - input2;
    }
    else if(operation == "*"){
        operation = "factor";
        result = input1 * input2;
    }
    else if(operation == "/"){
        operation = "quotient";
        result = input1 / input2;
    }

    cout << input1 << " " << input2 << "\n";
    cout << "The " << operation << " of " << inputA << " and " << inputB << " is " << result;

    return 0;
}