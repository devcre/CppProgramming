#include <iostream>

int main(void){
    int val1, val2;
    int result = 0 ;

    std::cout << "Enter first number: ";
    std::cin >> val1;

    std::cout << "Enter second number: ";
    std::cin >> val2;

    // Or
    // std::cout << "Enter two numbers: ";
    // std::cin >> val1 >> val2;

    if(val1 > val2){
        int tmp = val1;
        val1 = val2;
        val2 = tmp;
    }
    for(int i=val1+1; i<val2; i++){
        result += i;
    }

    // if(val1 < val2){
    //     for(int i=val1+1; i<val2; i++){ // Variables can be declared in 'For' statement
    //         result += i;
    //     }
    // }
    // else{
    //     for(int i=val2+1; i<val1; i++){
    //         result += i;
    //     }
    // }

    std::cout << "Sum of integers between two numbers: " << result << std::endl;
    return 0;

}