// 프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서,
// 입력 받은 데이터를 그대로 출력하는 프로그램을 작성해보자.

#include <iostream>

int main(void){
    char name[200];
    char pho_num[200];

    std::cout << "Input your Name: ";
    std::cin >> name;

    std::cout << "Input your Phone Number: ";
    std::cin >> pho_num;

    std::cout << "Your Name is " << name << ".\n";
    std::cout << "Your Phone Number is " << pho_num << ".\n";
    return 0;
}