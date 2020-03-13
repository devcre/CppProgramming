/*
 * Banking System Ver 0.1
 * 작성자 : 조경찬
 * 내 용 : OOP 단계별 프로젝트의 기본 틀 구성
 */

#include <iostream>
#include <cstring>

typedef struct BankAccount{
    int baid;       // bank account ID
    char name[200]; // member name
    int dAmount;    // deposit amount
} BankAccount;

int main(void){
    int choice;
    BankAccount data[200];
    int count = 0;

    while(true){
        // 메뉴화면 출력
        std::cout << "-----Menu-----" << std::endl;
        std::cout << "1. 계좌개설" << std::endl;
        std::cout << "2. 입   금" << std::endl;
        std::cout << "3. 출   금" << std::endl;
        std::cout << "4. 계좌정보 전체 출력" << std::endl;
        std::cout << "5. 프로그램 종료" << std::endl;

        std::cout << "선택: ";
        std::cin >> choice;

        std::cout << std::endl;

        if(int(choice) == 5){
            std::cout << "프로그램을 종료합니다." << std::endl;
            break;
        }
        // 계좌개설 기능
        else if(choice == 1){
            
            int newBAid;
            char newName[200];
            int newDAmount;
            BankAccount newMember;
            std::cout << "[계좌개설]" << std::endl;
            std::cout << "계좌ID: ";
            std::cin >> newBAid;

            std::cout << "이 름: ";
            std::cin >> newName;

            std::cout << "입금액: ";
            std::cin >> newDAmount;

            newMember.baid = newBAid;
            strcpy(newMember.name, newName);
            newMember.dAmount = newDAmount;
            
            data[count] = newMember;
            count += 1;

            std::cout << std::endl;
        }
        else if(choice == 2){
            
            int mBAid;
            int inputAmount = 0;
            std::cout << "[입   금]" << std::endl;
            std::cout << "계좌ID: ";
            std::cin >> mBAid;

            std::cout << "입금액: ";
            std::cin >> inputAmount;

            // 비효율적 방법
            for(int i=0; i<count; i++){
                if(data[i].baid == mBAid){
                    data[i].dAmount += inputAmount;
                }
            }

            std::cout << "입금완료" << std::endl;
            std::cout << std::endl;
        }
        else if(choice == 3){
            
            int mBAid;
            int wdAmount = 0; // withdrawal amout
            std::cout << "[출   금]" << std::endl;
            std::cout << "계좌ID: ";
            std::cin >> mBAid;

            std::cout << "출금액: ";
            std::cin >> wdAmount;

            // 비효율적 방법
            for(int i=0; i<count; i++){
                if(data[i].baid == mBAid){
                    if(wdAmount > data[i].dAmount){
                        std::cout << "잔액부족" << std::endl;
                    }
                    else{
                        data[i].dAmount -= wdAmount;
                        std::cout << "출금완료" << std::endl;
                    }
                }
            }
            std::cout << std::endl;
        }
        else if(choice == 4){
            for(int i=0; i<count; i++){
                std::cout << "계좌ID: " << data[i].baid << std::endl;
                std::cout << "이 름: " << data[i].name << std::endl;
                std::cout << "잔 액: " << data[i].dAmount << std::endl;
                std::cout << std::endl;
            }
            std::cout << std::endl;
        }
    }
}

// 입금과 출금 기능구현에 문제가 있음. -> mBAid의 자료형이 int가 아닌 char이었다.

// 기능을 함수화하면 더 좋을 것.