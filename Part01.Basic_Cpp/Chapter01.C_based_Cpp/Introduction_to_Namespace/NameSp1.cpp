// 자신만의 이름공간을 만들고 이 안에 함수를 정의하거나 변수를 선언한다면,
// 다른 공간에 이름이 같은 함수나 변수가 있어도 이름충돌은 발생하지 않는다.

#include <iostream>

namespace BestComImpl{
    void SimpleFunc(void){
        std::cout << "BestCom이 정의한 함수" << std::endl;
    }
}

namespace ProgComImpl{
    void SimpleFunc(void){
        std::cout << "ProgCom이 정의한 함수" << std::endl;
    }
}

int main(void){
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
    return 0;
}

// 연산자 ::을 가리켜 '범위지정 연산자(scope resolution operator)'라 하며, 이름공간을 지정할 때 사용하는 연산자이다.