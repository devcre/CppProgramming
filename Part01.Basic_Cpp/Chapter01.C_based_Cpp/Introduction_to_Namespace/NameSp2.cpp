// 함수는 선언과 정의를 분리하는 것이 일반적이다. '함수의 선언'은 헤더파일에 저장하고, '함수의 정의'는 소스파일에 저장하는 것이 보통이다.
// 이제 이름공간 기반에서 함수의 선언과 정의를 구분하는 방법에 대해 알아보자.

#include <iostream>

namespace BestComImpl{
    void SimpleFunc(void);
}

namespace ProgComImpl{
    void SimpleFunc(void);
}

int main(void){
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
    return 0;
}

void BestComImpl::SimpleFunc(void){
    std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImpl::SimpleFunc(void){
    std::cout << "ProgCom이 정의한 함수" << std::endl;
}