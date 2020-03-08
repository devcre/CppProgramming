// 판매원들의 급여 계산 프로그램을 작성해 보자.
// 이 회사는 모든 판매원에게 매달 50만원의 기본 급여와 물품 판매 가격의 12%에 해당하는 돈을 지급한다.
// 예를 들어서 민수라는 친구의 이번 달 물품 판매 금액이 100만원 이라면,
// 50+100*0.12=62, 따라서 62만원을 급여로 지급받는다.
// 단, 급여의 계산은 -1이 입력될 때까지 계속 되어야 한다.

#include <iostream>

int main(void){

    double sale_am = 0;
    int result = 0;
    while(true){
        std::cout << "Enter your sales amout in ten thousand won(-1 to end): ";
        std::cin >> sale_am;
        if(sale_am == -1){
            break;
        }

        result = 50 + sale_am * 0.12;

        std::cout << "This month's salary: " << result << "만원" << std::endl;
    }
    return 0;
}