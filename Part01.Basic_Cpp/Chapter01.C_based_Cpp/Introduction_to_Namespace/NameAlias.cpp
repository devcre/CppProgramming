// 이름공간의 별칭 지정

#include <iostream>
using namespace std;

namespace AAA{
    namespace BBB{
        namespace CCC{
            int num1;
            int num2;
        }
    }
}

int main(void){
    AAA::BBB::CCC::num1 = 20;
    AAA::BBB::CCC::num2 = 30;

    namespace ABC = AAA::BBB::CCC; // AAA::BBB::CCC에 ABC라는 별칭을 붙여주고 있다.
    cout << ABC::num1 << endl;
    cout << ABC::num2 << endl;
    return 0;
}

// 범위지정 연산자(Scope Resolution Operator)의 또 다른 기능
// 지역변수의 이름이 전역변수의 이름과 같을 경우, 전역변수는 지역변수에 의해 가려진다는 특징이 있다.

// int val = 100;        // 전역변수
// int SimpleFunc(void){
//     int val = 20;     // 지역변수
//     val += 3;         // 지역변수 val의 값 3 증가
//}

// 위의 코드에서 보이듯이 SimpleFunc 내에서 젼역변수와 동일한 이름의 지역변수 val이 선언되었기 때문에
// 이어서 등장하는 문장에서는 지역변수 val의 값을 3 증가시킨다.
// 그렇다면, SimpleFunc 함수 내에서 전역변수 val에 접근하려면 어떻게 해야 할까?
// 이 때에도 '범위지정 연산자'를 사용하면 된다.

// int val = 100;        // 전역변수
// int SimpleFunc(void){
//     int val = 20;     // 지역변수
//     val += 3;         // 지역변수 val의 값 3 증가
//     ::val += 7;       // 전역변수 val의 값 7 증가
//}